#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/MatchTargetFieldConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_impl.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFieldConstants_def.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::MatchTargetFieldConstants.HasAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::MatchTargetFields, ::UnityEngine::Timeline::MatchTargetFields)>(
    &::UnityEngine::Timeline::MatchTargetFieldConstants::HasAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dd61cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::MatchTargetFieldConstants*>(),
                                                { "HasAny", {}, { ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>(), ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::MatchTargetFieldConstants.Toggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::MatchTargetFields (*)(::UnityEngine::Timeline::MatchTargetFields, ::UnityEngine::Timeline::MatchTargetFields)>(
    &::UnityEngine::Timeline::MatchTargetFieldConstants::Toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd61d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::MatchTargetFieldConstants*>(),
                                                { "Toggle", {}, { ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>(), ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Timeline::MatchTargetFieldConstants::HasAny(::UnityEngine::Timeline::MatchTargetFields me, ::UnityEngine::Timeline::MatchTargetFields fields) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::MatchTargetFieldConstants*>(),
                                              { "HasAny", {}, { ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>(), ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, me, fields);
}
inline ::UnityEngine::Timeline::MatchTargetFields UnityEngine::Timeline::MatchTargetFieldConstants::Toggle(::UnityEngine::Timeline::MatchTargetFields me,
                                                                                                           ::UnityEngine::Timeline::MatchTargetFields flag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::MatchTargetFieldConstants*>(),
                                              { "Toggle", {}, { ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>(), ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::MatchTargetFields>(nullptr, ___internal_method, me, flag);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::MatchTargetFieldConstants::MatchTargetFieldConstants() {}
constexpr ::UnityEngine::Timeline::MatchTargetFields UnityEngine::Timeline::MatchTargetFieldConstants::All{ static_cast<int32_t>(0x3f) };
constexpr ::UnityEngine::Timeline::MatchTargetFields UnityEngine::Timeline::MatchTargetFieldConstants::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::MatchTargetFields UnityEngine::Timeline::MatchTargetFieldConstants::Position{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Timeline::MatchTargetFields UnityEngine::Timeline::MatchTargetFieldConstants::Rotation{ static_cast<int32_t>(0x38) };
