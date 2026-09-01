#pragma once
// IWYU pragma private; include "System\LocalAppContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalAppContext_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__LocalAppContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::LocalAppContext___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalAppContext___c::*)()>(&::System::LocalAppContext___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ffd894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalAppContext___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalAppContext___c._get_DisableCaching_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::LocalAppContext___c::*)()>(&::System::LocalAppContext___c::_get_DisableCaching_b__6_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ffd898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalAppContext___c*>(), { "<get_DisableCaching>b__6_0", {}, {} })));
    return ___internal_method;
  }
};
inline void System::LocalAppContext___c::setStaticF___9(::System::LocalAppContext___c* value) {
  ::cordl_internals::setStaticField<::System::LocalAppContext___c*, "<>9", ::System::LocalAppContext___c*>(std::forward<::System::LocalAppContext___c*>(value));
}
inline ::System::LocalAppContext___c* System::LocalAppContext___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::LocalAppContext___c*, "<>9", ::System::LocalAppContext___c*>();
}
inline void System::LocalAppContext___c::setStaticF___9__6_0(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__6_0", ::System::LocalAppContext___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* System::LocalAppContext___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__6_0", ::System::LocalAppContext___c*>();
}
inline void System::LocalAppContext___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalAppContext___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::LocalAppContext___c::_get_DisableCaching_b__6_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalAppContext___c*>(), { "<get_DisableCaching>b__6_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::LocalAppContext___c* System::LocalAppContext___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::LocalAppContext___c*>());
}
// Ctor Parameters []
constexpr ::System::LocalAppContext___c::LocalAppContext___c() {}
//  Writing Method size for method: ::System::LocalAppContext.GetCachedSwitchValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<int32_t>)>(&::System::LocalAppContext::GetCachedSwitchValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ffd664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalAppContext*>(), { "GetCachedSwitchValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalAppContext.GetCachedSwitchValueInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<int32_t>)>(&::System::LocalAppContext::GetCachedSwitchValueInternal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ffd684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::LocalAppContext*>(), { "GetCachedSwitchValueInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalAppContext.get_DisableCaching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::LocalAppContext::get_DisableCaching)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5ffd71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalAppContext*>(), { "get_DisableCaching", {}, {} })));
    return ___internal_method;
  }
};
inline void System::LocalAppContext::setStaticF_s_isDisableCachingInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_isDisableCachingInitialized", ::System::LocalAppContext*>(std::forward<bool>(value));
}
inline bool System::LocalAppContext::getStaticF_s_isDisableCachingInitialized() {
  return ::cordl_internals::getStaticField<bool, "s_isDisableCachingInitialized", ::System::LocalAppContext*>();
}
inline void System::LocalAppContext::setStaticF_s_disableCaching(bool value) {
  ::cordl_internals::setStaticField<bool, "s_disableCaching", ::System::LocalAppContext*>(std::forward<bool>(value));
}
inline bool System::LocalAppContext::getStaticF_s_disableCaching() {
  return ::cordl_internals::getStaticField<bool, "s_disableCaching", ::System::LocalAppContext*>();
}
inline void System::LocalAppContext::setStaticF_s_syncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_syncObject", ::System::LocalAppContext*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::LocalAppContext::getStaticF_s_syncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_syncObject", ::System::LocalAppContext*>();
}
inline bool System::LocalAppContext::GetCachedSwitchValue(::StringW switchName, ::by_ref<int32_t> switchValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalAppContext*>(), { "GetCachedSwitchValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, switchName, switchValue);
}
inline bool System::LocalAppContext::GetCachedSwitchValueInternal(::StringW switchName, ::by_ref<int32_t> switchValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::LocalAppContext*>(), { "GetCachedSwitchValueInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, switchName, switchValue);
}
inline bool System::LocalAppContext::get_DisableCaching() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalAppContext*>(), { "get_DisableCaching", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::LocalAppContext::LocalAppContext() {}
