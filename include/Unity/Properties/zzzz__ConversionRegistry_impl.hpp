#pragma once
// IWYU pragma private; include "Unity/Properties/ConversionRegistry.hpp"
#include "Unity/Properties/zzzz__ConversionRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__ConverterKey_def.hpp"
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::ConversionRegistry::*)(
    ::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey, ::System::Delegate*>*)>(&::Unity::Properties::ConversionRegistry::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x700dfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey, ::System::Delegate*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::ConversionRegistry (*)()>(&::Unity::Properties::ConversionRegistry::Create)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x700e078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::ConversionRegistry::*)(::System::Type*, ::System::Type*, ::System::Delegate*)>(
    &::Unity::Properties::ConversionRegistry::Register)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x700e13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(),
                                                             { "Register", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.LazyRegister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::ConversionRegistry::*)(::System::Type*, ::System::Type*, ::System::Func_1<::System::Delegate*>*)>(
    &::Unity::Properties::ConversionRegistry::LazyRegister)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x700e214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(),
                                         { "LazyRegister", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Func_1<::System::Delegate*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::ConversionRegistry::*)(::Unity::Properties::ConversionRegistry)>(&::Unity::Properties::ConversionRegistry::Apply)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x700e2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(), { "Apply", {}, { ::i2c::type_of<::Unity::Properties::ConversionRegistry>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.GetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::Unity::Properties::ConversionRegistry::*)(::System::Type*, ::System::Type*)>(
    &::Unity::Properties::ConversionRegistry::GetConverter)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x700e438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(),
                                                                                           { "GetConverter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.TryGetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::ConversionRegistry::*)(::System::Type*, ::System::Type*, ::by_ref<::System::Delegate*>)>(
    &::Unity::Properties::ConversionRegistry::TryGetConverter)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x700e55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(),
                                                { "TryGetConverter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Delegate*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::ConversionRegistry::*)(::Unity::Properties::ConversionRegistry, ::Unity::Properties::ConversionRegistry)>(
    &::Unity::Properties::ConversionRegistry::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x700e580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(),
                                                { "Equals", {}, { ::i2c::type_of<::Unity::Properties::ConversionRegistry>(), ::i2c::type_of<::Unity::Properties::ConversionRegistry>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConversionRegistry.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::ConversionRegistry::*)(::Unity::Properties::ConversionRegistry)>(
    &::Unity::Properties::ConversionRegistry::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x700e58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(), { "GetHashCode", {}, { ::i2c::type_of<::Unity::Properties::ConversionRegistry>() } })));
    return ___internal_method;
  }
};
inline void Unity::Properties::ConversionRegistry::_ctor(::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey, ::System::Delegate*>* storage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey, ::System::Delegate*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, storage);
}
inline ::Unity::Properties::ConversionRegistry Unity::Properties::ConversionRegistry::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::ConversionRegistry>(nullptr, ___internal_method);
}
inline void Unity::Properties::ConversionRegistry::Register(::System::Type* source, ::System::Type* destination, ::System::Delegate* converter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(),
                                                           { "Register", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, destination, converter);
}
inline void Unity::Properties::ConversionRegistry::LazyRegister(::System::Type* source, ::System::Type* destination, ::System::Func_1<::System::Delegate*>* converter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(),
                                       { "LazyRegister", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Func_1<::System::Delegate*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, destination, converter);
}
inline void Unity::Properties::ConversionRegistry::Apply(::Unity::Properties::ConversionRegistry registry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(), { "Apply", {}, { ::i2c::type_of<::Unity::Properties::ConversionRegistry>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, registry);
}
inline ::System::Delegate* Unity::Properties::ConversionRegistry::GetConverter(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(), { "GetConverter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(*this, ___internal_method, source, destination);
}
inline bool Unity::Properties::ConversionRegistry::TryGetConverter(::System::Type* source, ::System::Type* destination, ::by_ref<::System::Delegate*> converter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(),
                                              { "TryGetConverter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Delegate*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, source, destination, converter);
}
inline bool Unity::Properties::ConversionRegistry::Equals(::Unity::Properties::ConversionRegistry x, ::Unity::Properties::ConversionRegistry y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(),
                                              { "Equals", {}, { ::i2c::type_of<::Unity::Properties::ConversionRegistry>(), ::i2c::type_of<::Unity::Properties::ConversionRegistry>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, x, y);
}
inline int32_t Unity::Properties::ConversionRegistry::GetHashCode(::Unity::Properties::ConversionRegistry obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConversionRegistry>(), { "GetHashCode", {}, { ::i2c::type_of<::Unity::Properties::ConversionRegistry>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, obj);
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>"
constexpr Unity::Properties::ConversionRegistry::operator ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*() {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*
Unity::Properties::ConversionRegistry::i___System__Collections__Generic__IEqualityComparer_1___Unity__Properties__ConversionRegistry_() {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Converters", ty: "::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey,::System::Delegate*>*", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_LazyConverters", ty: "::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey,::System::Func_1<::System::Delegate*>*>*", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::Unity::Properties::ConversionRegistry::ConversionRegistry(
    ::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey, ::System::Delegate*>* m_Converters,
    ::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey, ::System::Func_1<::System::Delegate*>*>* m_LazyConverters) noexcept {
  this->m_Converters = m_Converters;
  this->m_LazyConverters = m_LazyConverters;
}
// Ctor Parameters []
constexpr ::Unity::Properties::ConversionRegistry::ConversionRegistry() {}
