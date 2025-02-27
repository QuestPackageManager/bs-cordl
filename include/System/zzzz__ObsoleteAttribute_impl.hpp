#pragma once
// IWYU pragma private; include "System/ObsoleteAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__ObsoleteAttribute_def.hpp"
//  Writing Method size for method: ::System::ObsoleteAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ObsoleteAttribute::*)()>(&::System::ObsoleteAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3e07b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObsoleteAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ObsoleteAttribute::*)(::StringW)>(&::System::ObsoleteAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3e07bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObsoleteAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ObsoleteAttribute::*)(::StringW, bool)>(&::System::ObsoleteAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3e07bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObsoleteAttribute.get_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ObsoleteAttribute::*)()>(&::System::ObsoleteAttribute::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e07c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), "get_Message",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObsoleteAttribute.get_IsError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ObsoleteAttribute::*)()>(&::System::ObsoleteAttribute::get_IsError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e07c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), "get_IsError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ObsoleteAttribute::__cordl_internal_get__message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____message;
}
constexpr ::StringW const& System::ObsoleteAttribute::__cordl_internal_get__message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____message;
}
constexpr void System::ObsoleteAttribute::__cordl_internal_set__message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::ObsoleteAttribute::__cordl_internal_get__error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error;
}
constexpr bool const& System::ObsoleteAttribute::__cordl_internal_get__error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error;
}
constexpr void System::ObsoleteAttribute::__cordl_internal_set__error(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____error = value;
}
inline void System::ObsoleteAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::ObsoleteAttribute::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void System::ObsoleteAttribute::_ctor(::StringW message, bool error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, error);
}
inline ::StringW System::ObsoleteAttribute::get_Message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), "get_Message",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::ObsoleteAttribute::get_IsError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), "get_IsError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::ObsoleteAttribute* System::ObsoleteAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ObsoleteAttribute*>());
}
inline ::System::ObsoleteAttribute* System::ObsoleteAttribute::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ObsoleteAttribute*>(message));
}
inline ::System::ObsoleteAttribute* System::ObsoleteAttribute::New_ctor(::StringW message, bool error) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ObsoleteAttribute*>(message, error));
}
// Ctor Parameters []
constexpr ::System::ObsoleteAttribute::ObsoleteAttribute() {}
