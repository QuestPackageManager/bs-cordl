#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__TypeInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Remoting/zzzz__IRemotingTypeInfo_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::TypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::TypeInfo::*)(::System::Type*)>(&::System::Runtime::Remoting::TypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x2492d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::TypeInfo.get_TypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::TypeInfo::*)()>(&::System::Runtime::Remoting::TypeInfo::get_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2495654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo*>::get(), "get_TypeName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::TypeInfo.CanCastTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::TypeInfo::*)(::System::Type*, ::System::Object*)>(
    &::System::Runtime::Remoting::TypeInfo::CanCastTo)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x249565c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo*>::get(), "CanCastTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::IRemotingTypeInfo"
constexpr System::Runtime::Remoting::TypeInfo::operator ::System::Runtime::Remoting::IRemotingTypeInfo*() noexcept {
  return static_cast<::System::Runtime::Remoting::IRemotingTypeInfo*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Runtime::Remoting::TypeInfo::__get_serverType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverType;
}
constexpr ::StringW const& System::Runtime::Remoting::TypeInfo::__get_serverType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverType;
}
constexpr void System::Runtime::Remoting::TypeInfo::__set_serverType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Runtime::Remoting::TypeInfo::__get_serverHierarchy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverHierarchy;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Runtime::Remoting::TypeInfo::__get_serverHierarchy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverHierarchy;
}
constexpr void System::Runtime::Remoting::TypeInfo::__set_serverHierarchy(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverHierarchy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Runtime::Remoting::TypeInfo::__get_interfacesImplemented() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interfacesImplemented;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Runtime::Remoting::TypeInfo::__get_interfacesImplemented() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interfacesImplemented;
}
constexpr void System::Runtime::Remoting::TypeInfo::__set_interfacesImplemented(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___interfacesImplemented)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::TypeInfo* System::Runtime::Remoting::TypeInfo::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::TypeInfo*>(type));
}
inline void System::Runtime::Remoting::TypeInfo::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::StringW System::Runtime::Remoting::TypeInfo::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo*>::get(), "get_TypeName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::TypeInfo::CanCastTo(::System::Type* fromType, ::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo*>::get(), "CanCastTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fromType, o);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::TypeInfo::TypeInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
