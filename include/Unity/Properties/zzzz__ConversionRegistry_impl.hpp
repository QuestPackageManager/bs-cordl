#pragma once
// IWYU pragma private; include "Unity/Properties/ConversionRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__ConversionRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__ConversionRegistry_def.hpp"
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry_ConverterKeyComparer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Properties::ConversionRegistry_ConverterKeyComparer::*)(
    ::Unity::Properties::ConversionRegistry_ConverterKey, ::Unity::Properties::ConversionRegistry_ConverterKey)>(&::Unity::Properties::ConversionRegistry_ConverterKeyComparer::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x69d6f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry_ConverterKeyComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ConversionRegistry_ConverterKey>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ConversionRegistry_ConverterKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry_ConverterKeyComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Properties::ConversionRegistry_ConverterKeyComparer::*)(
    ::Unity::Properties::ConversionRegistry_ConverterKey)>(&::Unity::Properties::ConversionRegistry_ConverterKeyComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69d6f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry_ConverterKeyComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ConversionRegistry_ConverterKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry_ConverterKeyComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::ConversionRegistry_ConverterKeyComparer::*)()>(
    &::Unity::Properties::ConversionRegistry_ConverterKeyComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69d6f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry_ConverterKeyComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Unity::Properties::ConversionRegistry_ConverterKeyComparer::Equals(::Unity::Properties::ConversionRegistry_ConverterKey x, ::Unity::Properties::ConversionRegistry_ConverterKey y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry_ConverterKeyComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ConversionRegistry_ConverterKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ConversionRegistry_ConverterKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t Unity::Properties::ConversionRegistry_ConverterKeyComparer::GetHashCode(::Unity::Properties::ConversionRegistry_ConverterKey obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry_ConverterKeyComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ConversionRegistry_ConverterKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline void Unity::Properties::ConversionRegistry_ConverterKeyComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry_ConverterKeyComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Properties::ConversionRegistry_ConverterKeyComparer* Unity::Properties::ConversionRegistry_ConverterKeyComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::ConversionRegistry_ConverterKeyComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry_ConverterKey>"
constexpr Unity::Properties::ConversionRegistry_ConverterKeyComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry_ConverterKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry_ConverterKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry_ConverterKey>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry_ConverterKey>*
Unity::Properties::ConversionRegistry_ConverterKeyComparer::i___System__Collections__Generic__IEqualityComparer_1___Unity__Properties__ConversionRegistry_ConverterKey_() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry_ConverterKey>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Properties::ConversionRegistry_ConverterKeyComparer::ConversionRegistry_ConverterKeyComparer() {}
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry_ConverterKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::ConversionRegistry_ConverterKey::*)(::System::Type*, ::System::Type*)>(
    &::Unity::Properties::ConversionRegistry_ConverterKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69d6d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry_ConverterKey>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Properties::ConversionRegistry_ConverterKey::_ctor(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry_ConverterKey>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destination);
}
// Ctor Parameters [CppParam { name: "SourceType", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DestinationType", ty: "::System::Type*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Unity::Properties::ConversionRegistry_ConverterKey::ConversionRegistry_ConverterKey(::System::Type* SourceType, ::System::Type* DestinationType) noexcept {
  this->SourceType = SourceType;
  this->DestinationType = DestinationType;
}
// Ctor Parameters []
constexpr ::Unity::Properties::ConversionRegistry_ConverterKey::ConversionRegistry_ConverterKey() {}
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::ConversionRegistry::*)(
    ::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConversionRegistry_ConverterKey, ::System::Delegate*>*)>(&::Unity::Properties::ConversionRegistry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69d6bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConversionRegistry_ConverterKey, ::System::Delegate*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::ConversionRegistry (*)()>(&::Unity::Properties::ConversionRegistry::Create)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x69d6bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::ConversionRegistry::*)(::System::Type*, ::System::Type*, ::System::Delegate*)>(
    &::Unity::Properties::ConversionRegistry::Register)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x69d6c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (::Unity::Properties::ConversionRegistry::*)(::System::Type*, ::System::Type*)>(
    &::Unity::Properties::ConversionRegistry::GetConverter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69d6d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), "GetConverter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.TryGetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Properties::ConversionRegistry::*)(::System::Type*, ::System::Type*, ::ByRef<::System::Delegate*>)>(
    &::Unity::Properties::ConversionRegistry::TryGetConverter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69d6dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), "TryGetConverter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Delegate*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Properties::ConversionRegistry::*)(
    ::Unity::Properties::ConversionRegistry, ::Unity::Properties::ConversionRegistry)>(&::Unity::Properties::ConversionRegistry::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69d6e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ConversionRegistry>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ConversionRegistry>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Properties::ConversionRegistry::*)(::Unity::Properties::ConversionRegistry)>(
    &::Unity::Properties::ConversionRegistry::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69d6e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ConversionRegistry>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Properties::ConversionRegistry::setStaticF_Comparer(::Unity::Properties::ConversionRegistry_ConverterKeyComparer* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::ConversionRegistry_ConverterKeyComparer*, "Comparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get>(
      std::forward<::Unity::Properties::ConversionRegistry_ConverterKeyComparer*>(value));
}
inline ::Unity::Properties::ConversionRegistry_ConverterKeyComparer* Unity::Properties::ConversionRegistry::getStaticF_Comparer() {
  return ::cordl_internals::getStaticField<::Unity::Properties::ConversionRegistry_ConverterKeyComparer*, "Comparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get>();
}
inline void Unity::Properties::ConversionRegistry::_ctor(::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConversionRegistry_ConverterKey, ::System::Delegate*>* storage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConversionRegistry_ConverterKey, ::System::Delegate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, storage);
}
inline ::Unity::Properties::ConversionRegistry Unity::Properties::ConversionRegistry::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::ConversionRegistry, false>(nullptr, ___internal_method);
}
inline void Unity::Properties::ConversionRegistry::Register(::System::Type* source, ::System::Type* destination, ::System::Delegate* converter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destination, converter);
}
inline ::System::Delegate* Unity::Properties::ConversionRegistry::GetConverter(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), "GetConverter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(this, ___internal_method, source, destination);
}
inline bool Unity::Properties::ConversionRegistry::TryGetConverter(::System::Type* source, ::System::Type* destination, ::ByRef<::System::Delegate*> converter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), "TryGetConverter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Delegate*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, source, destination, converter);
}
inline bool Unity::Properties::ConversionRegistry::Equals(::Unity::Properties::ConversionRegistry x, ::Unity::Properties::ConversionRegistry y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ConversionRegistry>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ConversionRegistry>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t Unity::Properties::ConversionRegistry::GetHashCode(::Unity::Properties::ConversionRegistry obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConversionRegistry>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ConversionRegistry>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>"
constexpr Unity::Properties::ConversionRegistry::operator ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*() {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*
Unity::Properties::ConversionRegistry::i___System__Collections__Generic__IEqualityComparer_1___Unity__Properties__ConversionRegistry_() {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Converters", ty: "::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConversionRegistry_ConverterKey,::System::Delegate*>*", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Properties::ConversionRegistry::ConversionRegistry(
    ::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConversionRegistry_ConverterKey, ::System::Delegate*>* m_Converters) noexcept {
  this->m_Converters = m_Converters;
}
// Ctor Parameters []
constexpr ::Unity::Properties::ConversionRegistry::ConversionRegistry() {}
