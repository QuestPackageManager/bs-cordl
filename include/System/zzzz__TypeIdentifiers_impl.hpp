#pragma once
// IWYU pragma private; include "System/TypeIdentifiers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TypeNames_impl.hpp"
#include "System/zzzz__TypeIdentifiers_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__TypeIdentifier_def.hpp"
#include "System/zzzz__TypeIdentifiers_def.hpp"
#include "System/zzzz__TypeName_def.hpp"
//  Writing Method size for method: ::System::TypeIdentifiers_Display._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TypeIdentifiers_Display::*)(::StringW)>(&::System::TypeIdentifiers_Display::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a87e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers_Display*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeIdentifiers_Display.get_DisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TypeIdentifiers_Display::*)()>(&::System::TypeIdentifiers_Display::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a87e88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers_Display*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers_Display*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeIdentifiers_Display.get_InternalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TypeIdentifiers_Display::*)()>(&::System::TypeIdentifiers_Display::get_InternalName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a87e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers_Display*>::get(), "get_InternalName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeIdentifiers_Display.GetInternalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TypeIdentifiers_Display::*)()>(&::System::TypeIdentifiers_Display::GetInternalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a87eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers_Display*>::get(), "GetInternalName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::TypeIdentifiers_Display::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& System::TypeIdentifiers_Display::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void System::TypeIdentifiers_Display::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::TypeIdentifiers_Display::__cordl_internal_get_internal_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internal_name;
}
constexpr ::StringW const& System::TypeIdentifiers_Display::__cordl_internal_get_internal_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internal_name;
}
constexpr void System::TypeIdentifiers_Display::__cordl_internal_set_internal_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___internal_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::TypeIdentifiers_Display::_ctor(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers_Display*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName);
}
inline ::StringW System::TypeIdentifiers_Display::get_DisplayName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers_Display*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::TypeIdentifiers_Display::get_InternalName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers_Display*>::get(), "get_InternalName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::TypeIdentifiers_Display::GetInternalName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers_Display*>::get(), "GetInternalName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::TypeIdentifiers_Display* System::TypeIdentifiers_Display::New_ctor(::StringW displayName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::TypeIdentifiers_Display*>(displayName));
}
/// @brief Convert operator to "::System::TypeIdentifier"
constexpr System::TypeIdentifiers_Display::operator ::System::TypeIdentifier*() noexcept {
  return static_cast<::System::TypeIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::TypeIdentifier"
constexpr ::System::TypeIdentifier* System::TypeIdentifiers_Display::i___System__TypeIdentifier() noexcept {
  return static_cast<::System::TypeIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::TypeName"
constexpr System::TypeIdentifiers_Display::operator ::System::TypeName*() noexcept {
  return static_cast<::System::TypeName*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::TypeName"
constexpr ::System::TypeName* System::TypeIdentifiers_Display::i___System__TypeName() noexcept {
  return static_cast<::System::TypeName*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
constexpr System::TypeIdentifiers_Display::operator ::System::IEquatable_1<::System::TypeName*>*() noexcept {
  return static_cast<::System::IEquatable_1<::System::TypeName*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::TypeName*>"
constexpr ::System::IEquatable_1<::System::TypeName*>* System::TypeIdentifiers_Display::i___System__IEquatable_1___System__TypeName__() noexcept {
  return static_cast<::System::IEquatable_1<::System::TypeName*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::TypeIdentifiers_Display::TypeIdentifiers_Display() {}
//  Writing Method size for method: ::System::TypeIdentifiers.FromDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeIdentifier* (*)(::StringW)>(&::System::TypeIdentifiers::FromDisplay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a87e30;

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
