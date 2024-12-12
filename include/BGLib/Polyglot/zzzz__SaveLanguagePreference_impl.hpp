#pragma once
// IWYU pragma private; include "BGLib/Polyglot/SaveLanguagePreference.hpp"
#include "BGLib/Polyglot/zzzz__ILocalize_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BGLib/Polyglot/zzzz__SaveLanguagePreference_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::SaveLanguagePreference.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::SaveLanguagePreference::*)()>(&::BGLib::Polyglot::SaveLanguagePreference::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22aff08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::SaveLanguagePreference*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::SaveLanguagePreference.OnLocalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::SaveLanguagePreference::*)(::BGLib::Polyglot::LocalizationModel*)>(
    &::BGLib::Polyglot::SaveLanguagePreference::OnLocalize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22aff58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::SaveLanguagePreference*>::get(), "OnLocalize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::SaveLanguagePreference._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::SaveLanguagePreference::*)()>(&::BGLib::Polyglot::SaveLanguagePreference::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22aff80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::SaveLanguagePreference*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BGLib::Polyglot::SaveLanguagePreference::__cordl_internal_get_preferenceKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preferenceKey;
}
constexpr ::StringW const& BGLib::Polyglot::SaveLanguagePreference::__cordl_internal_get_preferenceKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preferenceKey;
}
constexpr void BGLib::Polyglot::SaveLanguagePreference::__cordl_internal_set_preferenceKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preferenceKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGLib::Polyglot::SaveLanguagePreference::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::SaveLanguagePreference*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::Polyglot::SaveLanguagePreference::OnLocalize(::BGLib::Polyglot::LocalizationModel* localization) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::SaveLanguagePreference*>::get(), "OnLocalize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localization);
}
inline void BGLib::Polyglot::SaveLanguagePreference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::SaveLanguagePreference*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::Polyglot::SaveLanguagePreference* BGLib::Polyglot::SaveLanguagePreference::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::Polyglot::SaveLanguagePreference*>());
}
/// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
constexpr BGLib::Polyglot::SaveLanguagePreference::operator ::BGLib::Polyglot::ILocalize*() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::Polyglot::ILocalize"
constexpr ::BGLib::Polyglot::ILocalize* BGLib::Polyglot::SaveLanguagePreference::i___BGLib__Polyglot__ILocalize() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::SaveLanguagePreference::SaveLanguagePreference() {}
