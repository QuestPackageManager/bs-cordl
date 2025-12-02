#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TypeConverterRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TypeConverterRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypeConverterRegistry_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::*)(
    ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey, ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey)>(
    &::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x69fe57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::*)(
    ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey)>(&::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69fe5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::*)()>(
    &::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fe578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::Equals(::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey x,
                                                                                        ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::GetHashCode(::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline void UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer* UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>"
constexpr UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::operator ::System::Collections::Generic::IEqualityComparer_1<
    ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>*
UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__UIElements__TypeConverterRegistry_ConverterKey_() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::TypeConverterRegistry_ConverterKeyComparer() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey::*)(::System::Type*, ::System::Type*)>(
    &::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69fe234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TypeConverterRegistry_ConverterKey::_ctor(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destination);
}
// Ctor Parameters [CppParam { name: "SourceType", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DestinationType", ty: "::System::Type*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey::TypeConverterRegistry_ConverterKey(::System::Type* SourceType, ::System::Type* DestinationType) noexcept {
  this->SourceType = SourceType;
  this->DestinationType = DestinationType;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey::TypeConverterRegistry_ConverterKey() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypeConverterRegistry::*)(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey, ::System::Delegate*>*)>(&::UnityEngine::UIElements::TypeConverterRegistry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69fe154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey, ::System::Delegate*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TypeConverterRegistry (*)()>(&::UnityEngine::UIElements::TypeConverterRegistry::Create)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x69fe088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(),
                                                                               "Create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypeConverterRegistry::*)(::System::Type*, ::System::Type*, ::System::Delegate*)>(
    &::UnityEngine::UIElements::TypeConverterRegistry::Register)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x69fe15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypeConverterRegistry::*)(::UnityEngine::UIElements::TypeConverterRegistry)>(
    &::UnityEngine::UIElements::TypeConverterRegistry::Apply)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x69fe23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (::UnityEngine::UIElements::TypeConverterRegistry::*)(::System::Type*, ::System::Type*)>(
    &::UnityEngine::UIElements::TypeConverterRegistry::GetConverter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69fe3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(),
                                                                               "GetConverter", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.TryGetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TypeConverterRegistry::*)(
    ::System::Type*, ::System::Type*, ::ByRef<::System::Delegate*>)>(&::UnityEngine::UIElements::TypeConverterRegistry::TryGetConverter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69fe450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), "TryGetConverter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Delegate*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TypeConverterRegistry::*)(
    ::UnityEngine::UIElements::TypeConverterRegistry, ::UnityEngine::UIElements::TypeConverterRegistry)>(&::UnityEngine::UIElements::TypeConverterRegistry::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69fe4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::TypeConverterRegistry::*)(::UnityEngine::UIElements::TypeConverterRegistry)>(
    &::UnityEngine::UIElements::TypeConverterRegistry::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69fe4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TypeConverterRegistry::setStaticF_k_Comparer(::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*, "k_Comparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get>(
      std::forward<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>(value));
}
inline ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer* UnityEngine::UIElements::TypeConverterRegistry::getStaticF_k_Comparer() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*, "k_Comparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get>();
}
inline void
UnityEngine::UIElements::TypeConverterRegistry::_ctor(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey, ::System::Delegate*>* storage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey, ::System::Delegate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, storage);
}
inline ::UnityEngine::UIElements::TypeConverterRegistry UnityEngine::UIElements::TypeConverterRegistry::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TypeConverterRegistry, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::TypeConverterRegistry::Register(::System::Type* source, ::System::Type* destination, ::System::Delegate* converter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destination, converter);
}
inline void UnityEngine::UIElements::TypeConverterRegistry::Apply(::UnityEngine::UIElements::TypeConverterRegistry registry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, registry);
}
inline ::System::Delegate* UnityEngine::UIElements::TypeConverterRegistry::GetConverter(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(),
                                                                             "GetConverter", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(this, ___internal_method, source, destination);
}
inline bool UnityEngine::UIElements::TypeConverterRegistry::TryGetConverter(::System::Type* source, ::System::Type* destination, ::ByRef<::System::Delegate*> converter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), "TryGetConverter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Delegate*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, source, destination, converter);
}
inline bool UnityEngine::UIElements::TypeConverterRegistry::Equals(::UnityEngine::UIElements::TypeConverterRegistry x, ::UnityEngine::UIElements::TypeConverterRegistry y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t UnityEngine::UIElements::TypeConverterRegistry::GetHashCode(::UnityEngine::UIElements::TypeConverterRegistry obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypeConverterRegistry>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TypeConverterRegistry>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>"
constexpr UnityEngine::UIElements::TypeConverterRegistry::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>*() {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>*
UnityEngine::UIElements::TypeConverterRegistry::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__UIElements__TypeConverterRegistry_() {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Converters", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey,::System::Delegate*>*", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::TypeConverterRegistry::TypeConverterRegistry(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey, ::System::Delegate*>* m_Converters) noexcept {
  this->m_Converters = m_Converters;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TypeConverterRegistry::TypeConverterRegistry() {}
