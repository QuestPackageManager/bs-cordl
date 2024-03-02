#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__Installer_2_impl.hpp"
#include "Zenject/zzzz__DefaultGameObjectParentInstaller_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DefaultGameObjectParentInstaller_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::*)(::UnityEngine::GameObject*)>(
    &::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x302cd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::*)()>(
    &::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x302cdbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::__zenCreate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x302ce18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer*>::get(), "__zenCreate",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x302cec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::GameObject>& Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::__cordl_internal_get__gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::__cordl_internal_get__gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject;
}
constexpr void Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::__cordl_internal_set__gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer*
Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::New_ctor(::UnityEngine::GameObject* gameObject) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer*>(gameObject));
}
inline void Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::_ctor(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameObject);
}
inline void Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer() {}
//  Writing Method size for method: ::Zenject::DefaultGameObjectParentInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DefaultGameObjectParentInstaller::*)(::StringW)>(
    &::Zenject::DefaultGameObjectParentInstaller::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x302c8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectParentInstaller*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultGameObjectParentInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DefaultGameObjectParentInstaller::*)()>(
    &::Zenject::DefaultGameObjectParentInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x302c930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectParentInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectParentInstaller*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultGameObjectParentInstaller.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::DefaultGameObjectParentInstaller::__zenCreate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x302ca78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectParentInstaller*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultGameObjectParentInstaller.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::DefaultGameObjectParentInstaller::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x302cb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectParentInstaller*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::DefaultGameObjectParentInstaller::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& Zenject::DefaultGameObjectParentInstaller::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void Zenject::DefaultGameObjectParentInstaller::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::DefaultGameObjectParentInstaller* Zenject::DefaultGameObjectParentInstaller::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::DefaultGameObjectParentInstaller*>(name));
}
inline void Zenject::DefaultGameObjectParentInstaller::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectParentInstaller*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Zenject::DefaultGameObjectParentInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectParentInstaller*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::DefaultGameObjectParentInstaller::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectParentInstaller*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::DefaultGameObjectParentInstaller::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectParentInstaller*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::DefaultGameObjectParentInstaller::DefaultGameObjectParentInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
