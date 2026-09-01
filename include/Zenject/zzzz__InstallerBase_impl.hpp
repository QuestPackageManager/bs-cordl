#pragma once
// IWYU pragma private; include "Zenject\InstallerBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__InstallerBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IInstaller_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::InstallerBase.get_Container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::InstallerBase::*)()>(&::Zenject::InstallerBase::get_Container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e75acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstallerBase*>(), { "get_Container", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstallerBase.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::InstallerBase::*)()>(&::Zenject::InstallerBase::get_IsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e75ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::InstallerBase*>(), { ::i2c::class_of<::Zenject::InstallerBase*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstallerBase.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InstallerBase::*)()>(&::Zenject::InstallerBase::InstallBindings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::InstallerBase*>(), { ::i2c::class_of<::Zenject::InstallerBase*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstallerBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InstallerBase::*)()>(&::Zenject::InstallerBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e75980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstallerBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstallerBase.__zenFieldSetter0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::InstallerBase::__zenFieldSetter0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e75adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::InstallerBase*>(), { "__zenFieldSetter0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstallerBase.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::InstallerBase::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6e75c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstallerBase*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::InstallerBase::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& Zenject::InstallerBase::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::InstallerBase::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
inline ::Zenject::DiContainer* Zenject::InstallerBase::get_Container() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstallerBase*>(), { "get_Container", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline bool Zenject::InstallerBase::get_IsEnabled() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::InstallerBase*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::InstallerBase::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::InstallerBase*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::InstallerBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstallerBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::InstallerBase::__zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::InstallerBase*>(), { "__zenFieldSetter0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::InstallerBase::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstallerBase*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::InstallerBase* Zenject::InstallerBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InstallerBase*>());
}
/// @brief Convert operator to "::Zenject::IInstaller"
constexpr Zenject::InstallerBase::operator ::Zenject::IInstaller*() noexcept {
  return static_cast<::Zenject::IInstaller*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInstaller"
constexpr ::Zenject::IInstaller* Zenject::InstallerBase::i___Zenject__IInstaller() noexcept {
  return static_cast<::Zenject::IInstaller*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::InstallerBase::InstallerBase() {}
