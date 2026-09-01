#pragma once
// IWYU pragma private; include "System\Platform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Platform_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Platform.uname
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::System::Platform::uname)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x637a850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "uname", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.CheckOS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Platform::CheckOS)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x637a8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "CheckOS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsMacOS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Platform::get_IsMacOS)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x637aacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "get_IsMacOS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsFreeBSD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Platform::get_IsFreeBSD)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x637abb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "get_IsFreeBSD", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsOpenBSD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Platform::get_IsOpenBSD)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x637ac18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "get_IsOpenBSD", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsIBMi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Platform::get_IsIBMi)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x637ac78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "get_IsIBMi", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Platform.get_IsAix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Platform::get_IsAix)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x637acd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "get_IsAix", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Platform::setStaticF_checkedOS(bool value) {
  ::cordl_internals::setStaticField<bool, "checkedOS", ::System::Platform*>(std::forward<bool>(value));
}
inline bool System::Platform::getStaticF_checkedOS() {
  return ::cordl_internals::getStaticField<bool, "checkedOS", ::System::Platform*>();
}
inline void System::Platform::setStaticF_isMacOS(bool value) {
  ::cordl_internals::setStaticField<bool, "isMacOS", ::System::Platform*>(std::forward<bool>(value));
}
inline bool System::Platform::getStaticF_isMacOS() {
  return ::cordl_internals::getStaticField<bool, "isMacOS", ::System::Platform*>();
}
inline void System::Platform::setStaticF_isAix(bool value) {
  ::cordl_internals::setStaticField<bool, "isAix", ::System::Platform*>(std::forward<bool>(value));
}
inline bool System::Platform::getStaticF_isAix() {
  return ::cordl_internals::getStaticField<bool, "isAix", ::System::Platform*>();
}
inline void System::Platform::setStaticF_isIBMi(bool value) {
  ::cordl_internals::setStaticField<bool, "isIBMi", ::System::Platform*>(std::forward<bool>(value));
}
inline bool System::Platform::getStaticF_isIBMi() {
  return ::cordl_internals::getStaticField<bool, "isIBMi", ::System::Platform*>();
}
inline void System::Platform::setStaticF_isFreeBSD(bool value) {
  ::cordl_internals::setStaticField<bool, "isFreeBSD", ::System::Platform*>(std::forward<bool>(value));
}
inline bool System::Platform::getStaticF_isFreeBSD() {
  return ::cordl_internals::getStaticField<bool, "isFreeBSD", ::System::Platform*>();
}
inline void System::Platform::setStaticF_isOpenBSD(bool value) {
  ::cordl_internals::setStaticField<bool, "isOpenBSD", ::System::Platform*>(std::forward<bool>(value));
}
inline bool System::Platform::getStaticF_isOpenBSD() {
  return ::cordl_internals::getStaticField<bool, "isOpenBSD", ::System::Platform*>();
}
inline int32_t System::Platform::uname(::System::IntPtr buf) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "uname", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buf);
}
inline void System::Platform::CheckOS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "CheckOS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsMacOS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "get_IsMacOS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsFreeBSD() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "get_IsFreeBSD", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsOpenBSD() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "get_IsOpenBSD", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsIBMi() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "get_IsIBMi", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Platform::get_IsAix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Platform*>(), { "get_IsAix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Platform::Platform() {}
