#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/CommandLine/ArgumentOption.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentType_impl.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentOption_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentType_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)(
    ::StringW, ::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentType, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::BGLib::DotnetExtension::CommandLine::ArgumentOption::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x229dbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::CommandLine::ArgumentType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption.get_required
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)()>(
    &::BGLib::DotnetExtension::CommandLine::ArgumentOption::get_required)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x229dbec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get(),
                                                                               "get_required", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption.get_expectsValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)()>(
    &::BGLib::DotnetExtension::CommandLine::ArgumentOption::get_expectsValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x229dc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get(),
                                                                               "get_expectsValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption.ValidateArgumentValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)(::StringW)>(
    &::BGLib::DotnetExtension::CommandLine::ArgumentOption::ValidateArgumentValue)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x229dc28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get(), "ValidateArgumentValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::DotnetExtension::CommandLine::ArgumentOption::_ctor(::StringW name, ::StringW hint, ::BGLib::DotnetExtension::CommandLine::ArgumentType type,
                                                                       ::ArrayW<::StringW, ::Array<::StringW>*> identifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::CommandLine::ArgumentType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, hint, type, identifiers);
}
inline bool BGLib::DotnetExtension::CommandLine::ArgumentOption::get_required() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get(),
                                                                             "get_required", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BGLib::DotnetExtension::CommandLine::ArgumentOption::get_expectsValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get(),
                                                                             "get_expectsValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void BGLib::DotnetExtension::CommandLine::ArgumentOption::ValidateArgumentValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get(), "ValidateArgumentValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "identifiers", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "hint", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::BGLib::DotnetExtension::CommandLine::ArgumentType",
// modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::DotnetExtension::CommandLine::ArgumentOption::ArgumentOption(::StringW name, ::ArrayW<::StringW, ::Array<::StringW>*> identifiers, ::StringW hint,
                                                                                ::BGLib::DotnetExtension::CommandLine::ArgumentType type) noexcept {
  this->name = name;
  this->identifiers = identifiers;
  this->hint = hint;
  this->type = type;
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::CommandLine::ArgumentOption::ArgumentOption() {}
