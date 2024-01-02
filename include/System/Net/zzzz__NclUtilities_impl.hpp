#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NclUtilities_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/zzzz__IPHostEntry_def.hpp"
//  Writing Method size for method: ::System::Net::NclUtilities.IsFatal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Exception*)>(&::System::Net::NclUtilities::IsFatal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x299d724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get(), "IsFatal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.IsAddressLocal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::IPAddress*)>(&::System::Net::NclUtilities::IsAddressLocal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x299d7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get(), "IsAddressLocal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.GetLocalHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (*)()>(&::System::Net::NclUtilities::GetLocalHost)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x299dd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get(), "GetLocalHost",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.get_LocalAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> (*)()>(
    &::System::Net::NclUtilities::get_LocalAddresses)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x299d870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get(), "get_LocalAddresses",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.get_LocalAddressesLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)()>(&::System::Net::NclUtilities::get_LocalAddressesLock)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x299dd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get(), "get_LocalAddressesLock",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Net::NclUtilities::setStaticF__LocalAddresses(::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>, "_LocalAddresses",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get>(
      std::forward<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>(value));
}
inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> System::Net::NclUtilities::getStaticF__LocalAddresses() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>, "_LocalAddresses",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get>();
}
inline void System::Net::NclUtilities::setStaticF__LocalAddressesLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_LocalAddressesLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::NclUtilities::getStaticF__LocalAddressesLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "_LocalAddressesLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get>();
}
inline void System::Net::NclUtilities::setStaticF__LocalDomainName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_LocalDomainName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Net::NclUtilities::getStaticF__LocalDomainName() {
  return ::cordl_internals::getStaticField<::StringW, "_LocalDomainName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get>();
}
inline bool System::Net::NclUtilities::IsFatal(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get(), "IsFatal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, exception);
}
inline bool System::Net::NclUtilities::IsAddressLocal(::System::Net::IPAddress* ipAddress) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get(), "IsAddressLocal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ipAddress);
}
inline ::System::Net::IPHostEntry* System::Net::NclUtilities::GetLocalHost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get(), "GetLocalHost",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> System::Net::NclUtilities::get_LocalAddresses() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get(), "get_LocalAddresses",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>, false>(nullptr, ___internal_method);
}
inline ::System::Object* System::Net::NclUtilities::get_LocalAddressesLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities*>::get(), "get_LocalAddressesLock",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NclUtilities::NclUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
