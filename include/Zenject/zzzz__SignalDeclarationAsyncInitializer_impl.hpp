#pragma once
// IWYU pragma private; include "Zenject/SignalDeclarationAsyncInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IInitializable_impl.hpp"
#include "Zenject/zzzz__SignalDeclarationAsyncInitializer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__LazyInject_1_def.hpp"
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
#include "Zenject/zzzz__TickableManager_def.hpp"
//  Writing Method size for method: ::Zenject::SignalDeclarationAsyncInitializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclarationAsyncInitializer::*)(
    ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*, ::Zenject::LazyInject_1<::Zenject::TickableManager*>*)>(&::Zenject::SignalDeclarationAsyncInitializer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4b0b784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclarationAsyncInitializer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LazyInject_1<::Zenject::TickableManager*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclarationAsyncInitializer.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclarationAsyncInitializer::*)()>(
    &::Zenject::SignalDeclarationAsyncInitializer::Initialize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x4b0b7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclarationAsyncInitializer*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclarationAsyncInitializer.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::SignalDeclarationAsyncInitializer::__zenCreate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4b0b8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclarationAsyncInitializer*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclarationAsyncInitializer.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalDeclarationAsyncInitializer::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x4b0b9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclarationAsyncInitializer*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Zenject::LazyInject_1<::Zenject::TickableManager*>*& Zenject::SignalDeclarationAsyncInitializer::__cordl_internal_get__tickManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickManager;
}
constexpr ::Zenject::LazyInject_1<::Zenject::TickableManager*>* const& Zenject::SignalDeclarationAsyncInitializer::__cordl_internal_get__tickManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickManager;
}
constexpr void Zenject::SignalDeclarationAsyncInitializer::__cordl_internal_set__tickManager(::Zenject::LazyInject_1<::Zenject::TickableManager*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tickManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*& Zenject::SignalDeclarationAsyncInitializer::__cordl_internal_get__declarations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____declarations;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* const& Zenject::SignalDeclarationAsyncInitializer::__cordl_internal_get__declarations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____declarations;
}
constexpr void Zenject::SignalDeclarationAsyncInitializer::__cordl_internal_set__declarations(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____declarations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::SignalDeclarationAsyncInitializer::_ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* declarations,
                                                              ::Zenject::LazyInject_1<::Zenject::TickableManager*>* tickManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclarationAsyncInitializer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LazyInject_1<::Zenject::TickableManager*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, declarations, tickManager);
}
inline void Zenject::SignalDeclarationAsyncInitializer::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclarationAsyncInitializer*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::SignalDeclarationAsyncInitializer::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclarationAsyncInitializer*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalDeclarationAsyncInitializer::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclarationAsyncInitializer*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::SignalDeclarationAsyncInitializer* Zenject::SignalDeclarationAsyncInitializer::New_ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* declarations,
                                                                                                          ::Zenject::LazyInject_1<::Zenject::TickableManager*>* tickManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::SignalDeclarationAsyncInitializer*>(declarations, tickManager));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr Zenject::SignalDeclarationAsyncInitializer::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* Zenject::SignalDeclarationAsyncInitializer::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::SignalDeclarationAsyncInitializer::SignalDeclarationAsyncInitializer() {}
