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
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x69a8e18;

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
  constexpr static std::size_t addrs = 0x69a8e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::MatchTargetFieldConstants*>(),
                                                { "Toggle", {}, { ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>(), ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::MatchTargetFieldConstants::setStaticF_All(::UnityEngine::Timeline::MatchTargetFields value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::MatchTargetFields, "All", ::UnityEngine::Timeline::MatchTargetFieldConstants*>(
      std::forward<::UnityEngine::Timeline::MatchTargetFields>(value));
}
inline ::UnityEngine::Timeline::MatchTargetFields UnityEngine::Timeline::MatchTargetFieldConstants::getStaticF_All() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::MatchTargetFields, "All", ::UnityEngine::Timeline::MatchTargetFieldConstants*>();
}
inline void UnityEngine::Timeline::MatchTargetFieldConstants::setStaticF_None(::UnityEngine::Timeline::MatchTargetFields value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::MatchTargetFields, "None", ::UnityEngine::Timeline::MatchTargetFieldConstants*>(
      std::forward<::UnityEngine::Timeline::MatchTargetFields>(value));
}
inline ::UnityEngine::Timeline::MatchTargetFields UnityEngine::Timeline::MatchTargetFieldConstants::getStaticF_None() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::MatchTargetFields, "None", ::UnityEngine::Timeline::MatchTargetFieldConstants*>();
}
inline void UnityEngine::Timeline::MatchTargetFieldConstants::setStaticF_Position(::UnityEngine::Timeline::MatchTargetFields value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::MatchTargetFields, "Position", ::UnityEngine::Timeline::MatchTargetFieldConstants*>(
      std::forward<::UnityEngine::Timeline::MatchTargetFields>(value));
}
inline ::UnityEngine::Timeline::MatchTargetFields UnityEngine::Timeline::MatchTargetFieldConstants::getStaticF_Position() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::MatchTargetFields, "Position", ::UnityEngine::Timeline::MatchTargetFieldConstants*>();
}
inline void UnityEngine::Timeline::MatchTargetFieldConstants::setStaticF_Rotation(::UnityEngine::Timeline::MatchTargetFields value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::MatchTargetFields, "Rotation", ::UnityEngine::Timeline::MatchTargetFieldConstants*>(
      std::forward<::UnityEngine::Timeline::MatchTargetFields>(value));
}
inline ::UnityEngine::Timeline::MatchTargetFields UnityEngine::Timeline::MatchTargetFieldConstants::getStaticF_Rotation() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::MatchTargetFields, "Rotation", ::UnityEngine::Timeline::MatchTargetFieldConstants*>();
}
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
