#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CoreMathUtils_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CoreMathUtils.CalculateHalfJumpDurationInBeats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::CoreMathUtils::CalculateHalfJumpDurationInBeats)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x122d9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreMathUtils*>::get(), "CalculateHalfJumpDurationInBeats", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreMathUtils.__CalculateHalfJumpDurationInBeatsV2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::CoreMathUtils::__CalculateHalfJumpDurationInBeatsV2)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x122da00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreMathUtils*>::get(), "__CalculateHalfJumpDurationInBeatsV2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreMathUtils.__CalculateHalfJumpDurationInBeatsV1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(float_t, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::CoreMathUtils::__CalculateHalfJumpDurationInBeatsV1)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x122da34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreMathUtils*>::get(), "__CalculateHalfJumpDurationInBeatsV1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreMathUtils._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoreMathUtils::*)()>(&::GlobalNamespace::CoreMathUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122da7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreMathUtils*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::CoreMathUtils::CalculateHalfJumpDurationInBeats(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed,
                                                                                float_t oneBeatDuration, float_t noteJumpStartBeatOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreMathUtils*>::get(), "CalculateHalfJumpDurationInBeats", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, startHalfJumpDurationInBeats, maxHalfJumpDistance, noteJumpMovementSpeed, oneBeatDuration,
                                                             noteJumpStartBeatOffset);
}
inline float_t GlobalNamespace::CoreMathUtils::__CalculateHalfJumpDurationInBeatsV2(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed,
                                                                                    float_t oneBeatDuration, float_t noteJumpStartBeatOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreMathUtils*>::get(), "__CalculateHalfJumpDurationInBeatsV2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, startHalfJumpDurationInBeats, maxHalfJumpDistance, noteJumpMovementSpeed, oneBeatDuration,
                                                             noteJumpStartBeatOffset);
}
inline int32_t GlobalNamespace::CoreMathUtils::__CalculateHalfJumpDurationInBeatsV1(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed,
                                                                                    float_t oneBeatDuration, float_t minHalfJumpDistance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreMathUtils*>::get(), "__CalculateHalfJumpDurationInBeatsV1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, startHalfJumpDurationInBeats, maxHalfJumpDistance, noteJumpMovementSpeed, oneBeatDuration,
                                                             minHalfJumpDistance);
}
inline ::GlobalNamespace::CoreMathUtils* GlobalNamespace::CoreMathUtils::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CoreMathUtils*>());
}
inline void GlobalNamespace::CoreMathUtils::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreMathUtils*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoreMathUtils::CoreMathUtils() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
