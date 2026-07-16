#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifierMaskExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMaskExtensions_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierMaskExtensions.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GameplayModifierMask, ::GlobalNamespace::GameplayModifierMask)>(
    &::GlobalNamespace::GameplayModifierMaskExtensions::Contains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x37783e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierMaskExtensions*>(),
                                                { "Contains", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierMaskExtensions.DifferenceFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::GameplayModifierMask, ::GlobalNamespace::GameplayModifierMask)>(
    &::GlobalNamespace::GameplayModifierMaskExtensions::DifferenceFrom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x37783f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierMaskExtensions*>(),
                                                { "DifferenceFrom", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierMaskExtensions.ToHexString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::GameplayModifierMask)>(&::GlobalNamespace::GameplayModifierMaskExtensions::ToHexString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3778414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierMaskExtensions*>(), { "ToHexString", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierMaskExtensions.ToMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifierMask (*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifierMaskExtensions::ToMask)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3778478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierMaskExtensions*>(), { "ToMask", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierMaskExtensions.ToModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifiers* (*)(::GlobalNamespace::GameplayModifierMask)>(
    &::GlobalNamespace::GameplayModifierMaskExtensions::ToModifiers)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3778530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierMaskExtensions*>(), { "ToModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierMaskExtensions.ToGameplayModifierMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifierMask (*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifierMaskExtensions::ToGameplayModifierMask)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x377847c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierMaskExtensions*>(),
                                                                                           { "ToGameplayModifierMask", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::GameplayModifierMaskExtensions::Contains(::GlobalNamespace::GameplayModifierMask mask, ::GlobalNamespace::GameplayModifierMask other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierMaskExtensions*>(),
                                              { "Contains", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mask, other);
}
inline int32_t GlobalNamespace::GameplayModifierMaskExtensions::DifferenceFrom(::GlobalNamespace::GameplayModifierMask mask, ::GlobalNamespace::GameplayModifierMask other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierMaskExtensions*>(),
                                              { "DifferenceFrom", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mask, other);
}
inline ::StringW GlobalNamespace::GameplayModifierMaskExtensions::ToHexString(::GlobalNamespace::GameplayModifierMask mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierMaskExtensions*>(), { "ToHexString", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mask);
}
inline ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMaskExtensions::ToMask(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierMaskExtensions*>(), { "ToMask", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifierMask>(nullptr, ___internal_method, gameplayModifiers);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayModifierMaskExtensions::ToModifiers(::GlobalNamespace::GameplayModifierMask gameplayModifierMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierMaskExtensions*>(), { "ToModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*>(nullptr, ___internal_method, gameplayModifierMask);
}
inline ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMaskExtensions::ToGameplayModifierMask(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierMaskExtensions*>(),
                                                                                         { "ToGameplayModifierMask", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifierMask>(nullptr, ___internal_method, gameplayModifiers);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifierMaskExtensions::GameplayModifierMaskExtensions() {}
