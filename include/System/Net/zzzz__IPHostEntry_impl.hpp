#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__IPHostEntry_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::IPHostEntry.get_HostName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::IPHostEntry::*)()>(&::System::Net::IPHostEntry::get_HostName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281fe6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(), "get_HostName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry.set_HostName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPHostEntry::*)(::StringW)>(&::System::Net::IPHostEntry::set_HostName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281fe74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(), "set_HostName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry.set_Aliases
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPHostEntry::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Net::IPHostEntry::set_Aliases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281fe7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(), "set_Aliases", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry.get_AddressList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> (::System::Net::IPHostEntry::*)()>(
    &::System::Net::IPHostEntry::get_AddressList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281fe84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(), "get_AddressList",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry.set_AddressList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPHostEntry::*)(::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>)>(
    &::System::Net::IPHostEntry::set_AddressList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281fe8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(), "set_AddressList", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPHostEntry::*)()>(&::System::Net::IPHostEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x281fe94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::IPHostEntry::__get_hostName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostName;
}
constexpr ::StringW const& System::Net::IPHostEntry::__get_hostName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostName;
}
constexpr void System::Net::IPHostEntry::__set_hostName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hostName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Net::IPHostEntry::__get_aliases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aliases;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Net::IPHostEntry::__get_aliases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aliases;
}
constexpr void System::Net::IPHostEntry::__set_aliases(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___aliases)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>& System::Net::IPHostEntry::__get_addressList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addressList;
}
constexpr ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> const& System::Net::IPHostEntry::__get_addressList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addressList;
}
constexpr void System::Net::IPHostEntry::__set_addressList(::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___addressList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::IPHostEntry::__get_isTrustedHost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTrustedHost;
}
constexpr bool const& System::Net::IPHostEntry::__get_isTrustedHost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTrustedHost;
}
constexpr void System::Net::IPHostEntry::__set_isTrustedHost(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isTrustedHost = value;
}
inline ::StringW System::Net::IPHostEntry::get_HostName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(), "get_HostName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::IPHostEntry::set_HostName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(), "set_HostName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::IPHostEntry::set_Aliases(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(), "set_Aliases", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> System::Net::IPHostEntry::get_AddressList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(), "get_AddressList",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>, false>(this, ___internal_method);
}
inline void System::Net::IPHostEntry::set_AddressList(::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(), "set_AddressList", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::IPHostEntry* System::Net::IPHostEntry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::IPHostEntry*>());
}
inline void System::Net::IPHostEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::IPHostEntry::IPHostEntry() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
