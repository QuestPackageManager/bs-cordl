#pragma once
// IWYU pragma private; include "GlobalNamespace/BTSCharacterSpawnEventValueParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterSpawnEventValueParser_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventValueParser.GetPrefabId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::BTSCharacterSpawnEventValueParser::GetPrefabId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3285c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventValueParser*>(), { "GetPrefabId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventValueParser.GetAnimationId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::BTSCharacterSpawnEventValueParser::GetAnimationId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3285c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventValueParser*>(), { "GetAnimationId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventValueParser.GetIsAlternativeMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::BTSCharacterSpawnEventValueParser::GetIsAlternativeMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3286130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventValueParser*>(), { "GetIsAlternativeMaterial", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventValueParser.MergeValuesIntoOneInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, bool)>(&::GlobalNamespace::BTSCharacterSpawnEventValueParser::MergeValuesIntoOneInt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32862d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventValueParser*>(),
                                                             { "MergeValuesIntoOneInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::BTSCharacterSpawnEventValueParser::GetPrefabId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventValueParser*>(), { "GetPrefabId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::BTSCharacterSpawnEventValueParser::GetAnimationId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventValueParser*>(), { "GetAnimationId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::BTSCharacterSpawnEventValueParser::GetIsAlternativeMaterial(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventValueParser*>(), { "GetIsAlternativeMaterial", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::BTSCharacterSpawnEventValueParser::MergeValuesIntoOneInt(int32_t prefabId, int32_t animationId, bool isAlternativeMaterial) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventValueParser*>(),
                                                           { "MergeValuesIntoOneInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, prefabId, animationId, isAlternativeMaterial);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterSpawnEventValueParser::BTSCharacterSpawnEventValueParser() {}
