#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LanguageDropdown.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BGLib/Polyglot/zzzz__LanguageDropdown_def.hpp"
#include "BGLib/Polyglot/zzzz__ILocalize_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "UnityEngine/UI/zzzz__Dropdown_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LanguageDropdown.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LanguageDropdown::*)()>(&::BGLib::Polyglot::LanguageDropdown::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32238b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageDropdown*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LanguageDropdown.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LanguageDropdown::*)()>(&::BGLib::Polyglot::LanguageDropdown::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3223908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageDropdown*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LanguageDropdown.CreateDropdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LanguageDropdown::*)()>(&::BGLib::Polyglot::LanguageDropdown::CreateDropdown)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3223924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageDropdown*>::get(), "CreateDropdown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LanguageDropdown.OnLocalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LanguageDropdown::*)(::BGLib::Polyglot::LocalizationModel*)>(
    &::BGLib::Polyglot::LanguageDropdown::OnLocalize)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3223e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageDropdown*>::get(), "OnLocalize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LanguageDropdown._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LanguageDropdown::*)()>(&::BGLib::Polyglot::LanguageDropdown::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3223f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageDropdown*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Dropdown>& BGLib::Polyglot::LanguageDropdown::__cordl_internal_get_dropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dropdown;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& BGLib::Polyglot::LanguageDropdown::__cordl_internal_get_dropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dropdown;
}
constexpr void BGLib::Polyglot::LanguageDropdown::__cordl_internal_set_dropdown(::UnityW<::UnityEngine::UI::Dropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dropdown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGLib::Polyglot::LanguageDropdown::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageDropdown*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::Polyglot::LanguageDropdown::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageDropdown*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::Polyglot::LanguageDropdown::CreateDropdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageDropdown*>::get(), "CreateDropdown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::Polyglot::LanguageDropdown::OnLocalize(::BGLib::Polyglot::LocalizationModel* localization) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageDropdown*>::get(), "OnLocalize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localization);
}
inline void BGLib::Polyglot::LanguageDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageDropdown*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LanguageDropdown* BGLib::Polyglot::LanguageDropdown::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::Polyglot::LanguageDropdown*>());
}
/// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
constexpr BGLib::Polyglot::LanguageDropdown::operator ::BGLib::Polyglot::ILocalize*() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::Polyglot::ILocalize"
constexpr ::BGLib::Polyglot::ILocalize* BGLib::Polyglot::LanguageDropdown::i___BGLib__Polyglot__ILocalize() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LanguageDropdown::LanguageDropdown() {}
