#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Platform_def.hpp"
//  Writing Method size for method: ::System::Platform.uname
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*)>(&::System::Platform::uname)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x294d900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "uname", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.CheckOS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Platform::CheckOS)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x294d97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "CheckOS", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsMacOS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Platform::get_IsMacOS)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x294db88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsMacOS",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsFreeBSD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Platform::get_IsFreeBSD)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x294dc68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsFreeBSD",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsOpenBSD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Platform::get_IsOpenBSD)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x294dcc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsOpenBSD",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsIBMi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Platform::get_IsIBMi)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x294dd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsIBMi", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsAix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Platform::get_IsAix)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x294dd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsAix", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Platform::setStaticF_checkedOS(bool value) {
  ::cordl_internals::setStaticField<bool, "checkedOS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get>(std::forward<bool>(value));
}
inline bool System::Platform::getStaticF_checkedOS() {
  return ::cordl_internals::getStaticField<bool, "checkedOS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get>();
}
inline void System::Platform::setStaticF_isMacOS(bool value) {
  ::cordl_internals::setStaticField<bool, "isMacOS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get>(std::forward<bool>(value));
}
inline bool System::Platform::getStaticF_isMacOS() {
  return ::cordl_internals::getStaticField<bool, "isMacOS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get>();
}
inline void System::Platform::setStaticF_isAix(bool value) {
  ::cordl_internals::setStaticField<bool, "isAix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get>(std::forward<bool>(value));
}
inline bool System::Platform::getStaticF_isAix() {
  return ::cordl_internals::getStaticField<bool, "isAix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get>();
}
inline void System::Platform::setStaticF_isIBMi(bool value) {
  ::cordl_internals::setStaticField<bool, "isIBMi", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get>(std::forward<bool>(value));
}
inline bool System::Platform::getStaticF_isIBMi() {
  return ::cordl_internals::getStaticField<bool, "isIBMi", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get>();
}
inline void System::Platform::setStaticF_isFreeBSD(bool value) {
  ::cordl_internals::setStaticField<bool, "isFreeBSD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get>(std::forward<bool>(value));
}
inline bool System::Platform::getStaticF_isFreeBSD() {
  return ::cordl_internals::getStaticField<bool, "isFreeBSD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get>();
}
inline void System::Platform::setStaticF_isOpenBSD(bool value) {
  ::cordl_internals::setStaticField<bool, "isOpenBSD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get>(std::forward<bool>(value));
}
inline bool System::Platform::getStaticF_isOpenBSD() {
  return ::cordl_internals::getStaticField<bool, "isOpenBSD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get>();
}
inline int32_t System::Platform::uname(void* buf) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "uname", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, buf);
}
inline void System::Platform::CheckOS() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "CheckOS", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsMacOS() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsMacOS", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsFreeBSD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsFreeBSD",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsOpenBSD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsOpenBSD",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsIBMi() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsIBMi", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsAix() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsAix", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Platform::Platform() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
