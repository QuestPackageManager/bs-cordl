#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TypeNames_impl.hpp"
#include "System/zzzz__TypeIdentifiers_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__TypeIdentifier_def.hpp"
#include "System/zzzz__TypeIdentifiers_def.hpp"
#include "System/zzzz__TypeName_def.hpp"
//  Writing Method size for method: ::System::__TypeIdentifiers__Display._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TypeIdentifiers__Display::*)(::StringW)>(&::System::__TypeIdentifiers__Display::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f9ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TypeIdentifiers__Display.get_DisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::__TypeIdentifiers__Display::*)()>(&::System::__TypeIdentifiers__Display::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f9edc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TypeIdentifiers__Display.get_InternalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::__TypeIdentifiers__Display::*)()>(&::System::__TypeIdentifiers__Display::get_InternalName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26f9ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(), "get_InternalName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TypeIdentifiers__Display.GetInternalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::__TypeIdentifiers__Display::*)()>(&::System::__TypeIdentifiers__Display::GetInternalName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26f9f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(), "GetInternalName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::TypeIdentifier"
constexpr System::__TypeIdentifiers__Display::operator ::System::TypeIdentifier*() noexcept {
  return static_cast<::System::TypeIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::TypeIdentifier"
constexpr ::System::TypeIdentifier* System::__TypeIdentifiers__Display::i___System__TypeIdentifier() noexcept {
  return static_cast<::System::TypeIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::TypeName"
constexpr System::__TypeIdentifiers__Display::operator ::System::TypeName*() noexcept {
  return static_cast<::System::TypeName*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::TypeName"
constexpr ::System::TypeName* System::__TypeIdentifiers__Display::i___System__TypeName() noexcept {
  return static_cast<::System::TypeName*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
constexpr System::__TypeIdentifiers__Display::operator ::System::IEquatable_1<::System::TypeName*>*() noexcept {
  return static_cast<::System::IEquatable_1<::System::TypeName*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::TypeName*>"
constexpr ::System::IEquatable_1<::System::TypeName*>* System::__TypeIdentifiers__Display::i___System__IEquatable_1___System__TypeName__() noexcept {
  return static_cast<::System::IEquatable_1<::System::TypeName*>*>(static_cast<void*>(this));
}
constexpr ::StringW& System::__TypeIdentifiers__Display::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& System::__TypeIdentifiers__Display::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void System::__TypeIdentifiers__Display::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__TypeIdentifiers__Display::__cordl_internal_get_internal_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internal_name;
}
constexpr ::StringW const& System::__TypeIdentifiers__Display::__cordl_internal_get_internal_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internal_name;
}
constexpr void System::__TypeIdentifiers__Display::__cordl_internal_set_internal_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___internal_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::__TypeIdentifiers__Display* System::__TypeIdentifiers__Display::New_ctor(::StringW displayName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::__TypeIdentifiers__Display*>(displayName));
}
inline void System::__TypeIdentifiers__Display::_ctor(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName);
}
inline ::StringW System::__TypeIdentifiers__Display::get_DisplayName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::__TypeIdentifiers__Display::get_InternalName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(), "get_InternalName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::__TypeIdentifiers__Display::GetInternalName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(), "GetInternalName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__TypeIdentifiers__Display::__TypeIdentifiers__Display() {}
//  Writing Method size for method: ::System::TypeIdentifiers.FromDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeIdentifier* (*)(::StringW)>(&::System::TypeIdentifiers::FromDisplay)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x26f9e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers*>::get(), "FromDisplay", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::TypeIdentifier* System::TypeIdentifiers::FromDisplay(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers*>::get(), "FromDisplay", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeIdentifier*, false>(nullptr, ___internal_method, displayName);
}
// Ctor Parameters []
constexpr ::System::TypeIdentifiers::TypeIdentifiers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
