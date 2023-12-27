#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__ObsoleteAttribute_def.hpp"
//  Writing Method size for method: ::System::ObsoleteAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ObsoleteAttribute::*)()>(&::System::ObsoleteAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25bdea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObsoleteAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ObsoleteAttribute::*)(::StringW)>(&::System::ObsoleteAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25bdec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObsoleteAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ObsoleteAttribute::*)(::StringW, bool)>(&::System::ObsoleteAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x25bdeec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObsoleteAttribute.get_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ObsoleteAttribute::*)()>(&::System::ObsoleteAttribute::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25bdf1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), "get_Message",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ObsoleteAttribute::__get__message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____message;
}
constexpr ::StringW const& System::ObsoleteAttribute::__get__message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____message;
}
constexpr void System::ObsoleteAttribute::__set__message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::ObsoleteAttribute::__get__error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____error;
}
constexpr bool const& System::ObsoleteAttribute::__get__error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____error;
}
constexpr void System::ObsoleteAttribute::__set__error(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____error = value;
}
inline ::System::ObsoleteAttribute* System::ObsoleteAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ObsoleteAttribute*>());
}
inline void System::ObsoleteAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ObsoleteAttribute* System::ObsoleteAttribute::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ObsoleteAttribute*>(message));
}
inline void System::ObsoleteAttribute::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::System::ObsoleteAttribute* System::ObsoleteAttribute::New_ctor(::StringW message, bool error) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ObsoleteAttribute*>(message, error));
}
inline void System::ObsoleteAttribute::_ctor(::StringW message, bool error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, error);
}
inline ::StringW System::ObsoleteAttribute::get_Message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ObsoleteAttribute*>::get(), "get_Message",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ObsoleteAttribute::ObsoleteAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
