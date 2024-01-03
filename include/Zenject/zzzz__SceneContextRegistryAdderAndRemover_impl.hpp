#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SceneContextRegistryAdderAndRemover_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SceneContextRegistry_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SceneContextRegistryAdderAndRemover::*)(::Zenject::SceneContext*, ::Zenject::SceneContextRegistry*)>(
    &::Zenject::SceneContextRegistryAdderAndRemover::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2f18998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContext*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContextRegistry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SceneContextRegistryAdderAndRemover::*)()>(
    &::Zenject::SceneContextRegistryAdderAndRemover::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f189c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                                                                               "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SceneContextRegistryAdderAndRemover::*)()>(
    &::Zenject::SceneContextRegistryAdderAndRemover::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f189e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                                                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::SceneContextRegistryAdderAndRemover::__zenCreate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2f18a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SceneContextRegistryAdderAndRemover::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2f18b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr Zenject::SceneContextRegistryAdderAndRemover::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* Zenject::SceneContextRegistryAdderAndRemover::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::SceneContextRegistryAdderAndRemover::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::SceneContextRegistryAdderAndRemover::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::Zenject::SceneContextRegistry*& Zenject::SceneContextRegistryAdderAndRemover::__get__registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SceneContextRegistry*> const& Zenject::SceneContextRegistryAdderAndRemover::__get__registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry;
}
constexpr void Zenject::SceneContextRegistryAdderAndRemover::__set__registry(::Zenject::SceneContextRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____registry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::SceneContext*& Zenject::SceneContextRegistryAdderAndRemover::__get__sceneContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneContext;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SceneContext*> const& Zenject::SceneContextRegistryAdderAndRemover::__get__sceneContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneContext;
}
constexpr void Zenject::SceneContextRegistryAdderAndRemover::__set__sceneContext(::Zenject::SceneContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::SceneContextRegistryAdderAndRemover* Zenject::SceneContextRegistryAdderAndRemover::New_ctor(::Zenject::SceneContext* sceneContext, ::Zenject::SceneContextRegistry* registry) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SceneContextRegistryAdderAndRemover*>(sceneContext, registry));
}
inline void Zenject::SceneContextRegistryAdderAndRemover::_ctor(::Zenject::SceneContext* sceneContext, ::Zenject::SceneContextRegistry* registry) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContextRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneContext, registry);
}
inline void Zenject::SceneContextRegistryAdderAndRemover::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                                                                             "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::SceneContextRegistryAdderAndRemover::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::SceneContextRegistryAdderAndRemover::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SceneContextRegistryAdderAndRemover::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::SceneContextRegistryAdderAndRemover::SceneContextRegistryAdderAndRemover() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
