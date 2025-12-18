#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Style.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Style_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style.get_Instantiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::get_Instantiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b1694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style*>::get(), "get_Instantiated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b158c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::__cordl_internal_get__instantiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantiated;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::__cordl_internal_get__instantiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantiated;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::__cordl_internal_set__instantiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instantiated = value;
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::get_Instantiated() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style*>::get(), "get_Instantiated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::StringW Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::Path() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style*>::get(), "Path",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::Default() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style*>::get(), "Default",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::Load(::StringW name) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style*>::get(), "Load",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, name);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::Instantiate(::StringW name) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style*>::get(), "Instantiate",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, name);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style* Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style::Style() {}
