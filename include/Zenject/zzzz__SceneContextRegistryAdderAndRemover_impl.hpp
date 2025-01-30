#pragma once
// IWYU pragma private; include "Zenject/SceneContextRegistryAdderAndRemover.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IInitializable_impl.hpp"
#include "Zenject/zzzz__SceneContextRegistryAdderAndRemover_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SceneContextRegistry_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SceneContextRegistryAdderAndRemover::*)(::Zenject::SceneContext*, ::Zenject::SceneContextRegistry*)>(
    &::Zenject::SceneContextRegistryAdderAndRemover::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4b4f160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContextRegistry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SceneContextRegistryAdderAndRemover::*)()>(
    &::Zenject::SceneContextRegistryAdderAndRemover::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4b4f18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SceneContextRegistryAdderAndRemover::*)()>(
    &::Zenject::SceneContextRegistryAdderAndRemover::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4b4f1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::SceneContextRegistryAdderAndRemover::__zenCreate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4b4f1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SceneContextRegistryAdderAndRemover::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x4b4f2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Zenject::SceneContextRegistry*& Zenject::SceneContextRegistryAdderAndRemover::__cordl_internal_get__registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry;
}
constexpr ::Zenject::SceneContextRegistry* const& Zenject::SceneContextRegistryAdderAndRemover::__cordl_internal_get__registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry;
}
constexpr void Zenject::SceneContextRegistryAdderAndRemover::__cordl_internal_set__registry(::Zenject::SceneContextRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____registry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Zenject::SceneContext>& Zenject::SceneContextRegistryAdderAndRemover::__cordl_internal_get__sceneContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneContext;
}
constexpr ::UnityW<::Zenject::SceneContext> const& Zenject::SceneContextRegistryAdderAndRemover::__cordl_internal_get__sceneContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneContext;
}
constexpr void Zenject::SceneContextRegistryAdderAndRemover::__cordl_internal_set__sceneContext(::UnityW<::Zenject::SceneContext> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::SceneContextRegistryAdderAndRemover::_ctor(::Zenject::SceneContext* sceneContext, ::Zenject::SceneContextRegistry* registry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContextRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneContext, registry);
}
inline void Zenject::SceneContextRegistryAdderAndRemover::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::SceneContextRegistryAdderAndRemover::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::SceneContextRegistryAdderAndRemover::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SceneContextRegistryAdderAndRemover::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::SceneContextRegistryAdderAndRemover* Zenject::SceneContextRegistryAdderAndRemover::New_ctor(::Zenject::SceneContext* sceneContext, ::Zenject::SceneContextRegistry* registry) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::SceneContextRegistryAdderAndRemover*>(sceneContext, registry));
}
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
// Ctor Parameters []
constexpr ::Zenject::SceneContextRegistryAdderAndRemover::SceneContextRegistryAdderAndRemover() {}
