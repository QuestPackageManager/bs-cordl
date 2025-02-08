#pragma once
// IWYU pragma private; include "System/Platform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Platform_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Platform.uname
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::System::Platform::uname)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4414534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "uname", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.CheckOS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Platform::CheckOS)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x44145b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "CheckOS",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsMacOS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Platform::get_IsMacOS)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x44147bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsMacOS",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsFreeBSD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Platform::get_IsFreeBSD)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x441489c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsFreeBSD",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsOpenBSD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Platform::get_IsOpenBSD)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x44148f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsOpenBSD",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsIBMi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Platform::get_IsIBMi)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4414954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsIBMi",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsAix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Platform::get_IsAix)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x44149b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsAix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
inline int32_t System::Platform::uname(::System::IntPtr buf) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "uname", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, buf);
}
inline void System::Platform::CheckOS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "CheckOS",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsMacOS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsMacOS",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsFreeBSD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsFreeBSD",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsOpenBSD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsOpenBSD",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsIBMi() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsIBMi",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsAix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Platform*>::get(), "get_IsAix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Platform::Platform() {}
