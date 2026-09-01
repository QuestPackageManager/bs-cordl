#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TypeConverterRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TypeConverterRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypeConverterRegistry_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::*)(::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey,
                                                                                                                                       ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey)>(
    &::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6c32cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>(),
            { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>(), ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::*)(
    ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey)>(&::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c32d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>(),
                                                             { "GetHashCode", {}, { ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::*)()>(
    &::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c32cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::Equals(::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey x,
                                                                                        ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>(),
          { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>(), ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::GetHashCode(::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>(),
                                                                                         { "GetHashCode", {}, { ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer* UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey::*)(::System::Type*, ::System::Type*)>(
    &::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c32978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TypeConverterRegistry_ConverterKey::_ctor(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, destination);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TypeConverterRegistry::*)(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey, ::System::Delegate*>*)>(&::UnityEngine::UIElements::TypeConverterRegistry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c32898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey, ::System::Delegate*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TypeConverterRegistry (*)()>(&::UnityEngine::UIElements::TypeConverterRegistry::Create)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6c327cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TypeConverterRegistry::*)(::System::Type*, ::System::Type*, ::System::Delegate*)>(
    &::UnityEngine::UIElements::TypeConverterRegistry::Register)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6c328a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                                                             { "Register", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TypeConverterRegistry::*)(::UnityEngine::UIElements::TypeConverterRegistry)>(
    &::UnityEngine::UIElements::TypeConverterRegistry::Apply)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6c32980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                                                                                           { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.GetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::UnityEngine::UIElements::TypeConverterRegistry::*)(::System::Type*, ::System::Type*)>(
    &::UnityEngine::UIElements::TypeConverterRegistry::GetConverter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c32b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                                                                                           { "GetConverter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.TryGetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TypeConverterRegistry::*)(::System::Type*, ::System::Type*, ::by_ref<::System::Delegate*>)>(
    &::UnityEngine::UIElements::TypeConverterRegistry::TryGetConverter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c32b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                                                { "TryGetConverter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Delegate*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TypeConverterRegistry::*)(
    ::UnityEngine::UIElements::TypeConverterRegistry, ::UnityEngine::UIElements::TypeConverterRegistry)>(&::UnityEngine::UIElements::TypeConverterRegistry::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c32c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                            { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry>(), ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypeConverterRegistry.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::TypeConverterRegistry::*)(::UnityEngine::UIElements::TypeConverterRegistry)>(
    &::UnityEngine::UIElements::TypeConverterRegistry::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c32c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                                                                                           { "GetHashCode", {}, { ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TypeConverterRegistry::setStaticF_k_Comparer(::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*, "k_Comparer", ::UnityEngine::UIElements::TypeConverterRegistry>(
      std::forward<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*>(value));
}
inline ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer* UnityEngine::UIElements::TypeConverterRegistry::getStaticF_k_Comparer() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*, "k_Comparer", ::UnityEngine::UIElements::TypeConverterRegistry>();
}
inline void
UnityEngine::UIElements::TypeConverterRegistry::_ctor(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey, ::System::Delegate*>* storage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey, ::System::Delegate*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, storage);
}
inline ::UnityEngine::UIElements::TypeConverterRegistry UnityEngine::UIElements::TypeConverterRegistry::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TypeConverterRegistry>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::TypeConverterRegistry::Register(::System::Type* source, ::System::Type* destination, ::System::Delegate* converter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                                                           { "Register", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, destination, converter);
}
inline void UnityEngine::UIElements::TypeConverterRegistry::Apply(::UnityEngine::UIElements::TypeConverterRegistry registry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(), { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, registry);
}
inline ::System::Delegate* UnityEngine::UIElements::TypeConverterRegistry::GetConverter(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                                                                                         { "GetConverter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(*this, ___internal_method, source, destination);
}
inline bool UnityEngine::UIElements::TypeConverterRegistry::TryGetConverter(::System::Type* source, ::System::Type* destination, ::by_ref<::System::Delegate*> converter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                                              { "TryGetConverter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Delegate*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, source, destination, converter);
}
inline bool UnityEngine::UIElements::TypeConverterRegistry::Equals(::UnityEngine::UIElements::TypeConverterRegistry x, ::UnityEngine::UIElements::TypeConverterRegistry y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                                       { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry>(), ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, x, y);
}
inline int32_t UnityEngine::UIElements::TypeConverterRegistry::GetHashCode(::UnityEngine::UIElements::TypeConverterRegistry obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypeConverterRegistry>(),
                                                                                         { "GetHashCode", {}, { ::i2c::type_of<::UnityEngine::UIElements::TypeConverterRegistry>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, obj);
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>"
constexpr UnityEngine::UIElements::TypeConverterRegistry::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>*() {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>*
UnityEngine::UIElements::TypeConverterRegistry::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__UIElements__TypeConverterRegistry_() {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Converters", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey,::System::Delegate*>*", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::TypeConverterRegistry::TypeConverterRegistry(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::TypeConverterRegistry_ConverterKey, ::System::Delegate*>* m_Converters) noexcept {
  this->m_Converters = m_Converters;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TypeConverterRegistry::TypeConverterRegistry() {}
