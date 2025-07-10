#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatToTimeAndRotationConverter.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeAndRotationConverter_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__RotationTimeProcessor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatToTimeAndRotationConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatToTimeAndRotationConverter::*)(
    ::GlobalNamespace::IBeatToTimeConverter*, ::GlobalNamespace::RotationTimeProcessor*)>(&::GlobalNamespace::BeatToTimeAndRotationConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26ba4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatToTimeAndRotationConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatToTimeAndRotationConverter.BeatToRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatToTimeAndRotationConverter::*)(float_t)>(
    &::GlobalNamespace::BeatToTimeAndRotationConverter::BeatToRotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26ba510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatToTimeAndRotationConverter*>::get(), "BeatToRotation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RotationTimeProcessor*& GlobalNamespace::BeatToTimeAndRotationConverter::__cordl_internal_get__rotationTimeProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationTimeProcessor;
}
constexpr ::GlobalNamespace::RotationTimeProcessor* const& GlobalNamespace::BeatToTimeAndRotationConverter::__cordl_internal_get__rotationTimeProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationTimeProcessor;
}
constexpr void GlobalNamespace::BeatToTimeAndRotationConverter::__cordl_internal_set__rotationTimeProcessor(::GlobalNamespace::RotationTimeProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationTimeProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatToTimeAndRotationConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatToTimeAndRotationConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline int32_t GlobalNamespace::BeatToTimeAndRotationConverter::BeatToRotation(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatToTimeAndRotationConverter*>::get(), "BeatToRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, beat);
}
inline ::GlobalNamespace::BeatToTimeAndRotationConverter* GlobalNamespace::BeatToTimeAndRotationConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                                                    ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatToTimeAndRotationConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatToTimeAndRotationConverter::BeatToTimeAndRotationConverter() {}
