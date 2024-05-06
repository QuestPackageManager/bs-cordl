#pragma once
// IWYU pragma private; include "Zenject/Internal/SingletonMarkRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/Internal/zzzz__SingletonMarkRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::SingletonMarkRegistry.MarkNonSingleton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::SingletonMarkRegistry::*)(::System::Type*)>(
    &::Zenject::Internal::SingletonMarkRegistry::MarkNonSingleton)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x36744e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(), "MarkNonSingleton",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::SingletonMarkRegistry.MarkSingleton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::SingletonMarkRegistry::*)(::System::Type*)>(
    &::Zenject::Internal::SingletonMarkRegistry::MarkSingleton)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3674594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(), "MarkSingleton",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::SingletonMarkRegistry.Unmark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::SingletonMarkRegistry::*)(::System::Type*)>(
    &::Zenject::Internal::SingletonMarkRegistry::Unmark)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3674668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(), "Unmark", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::SingletonMarkRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::SingletonMarkRegistry::*)()>(&::Zenject::Internal::SingletonMarkRegistry::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x36746d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& Zenject::Internal::SingletonMarkRegistry::__cordl_internal_get__boundSingletons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundSingletons;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Type*>*> const&
Zenject::Internal::SingletonMarkRegistry::__cordl_internal_get__boundSingletons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundSingletons;
}
constexpr void Zenject::Internal::SingletonMarkRegistry::__cordl_internal_set__boundSingletons(::System::Collections::Generic::HashSet_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boundSingletons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& Zenject::Internal::SingletonMarkRegistry::__cordl_internal_get__boundNonSingletons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundNonSingletons;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Type*>*> const&
Zenject::Internal::SingletonMarkRegistry::__cordl_internal_get__boundNonSingletons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundNonSingletons;
}
constexpr void Zenject::Internal::SingletonMarkRegistry::__cordl_internal_set__boundNonSingletons(::System::Collections::Generic::HashSet_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boundNonSingletons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::SingletonMarkRegistry::MarkNonSingleton(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(), "MarkNonSingleton",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Zenject::Internal::SingletonMarkRegistry::MarkSingleton(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(), "MarkSingleton", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Zenject::Internal::SingletonMarkRegistry::Unmark(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(), "Unmark", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::Zenject::Internal::SingletonMarkRegistry* Zenject::Internal::SingletonMarkRegistry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::SingletonMarkRegistry*>());
}
inline void Zenject::Internal::SingletonMarkRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::SingletonMarkRegistry::SingletonMarkRegistry() {}
