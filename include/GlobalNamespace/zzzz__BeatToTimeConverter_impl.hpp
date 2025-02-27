#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatToTimeConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatToTimeConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatToTimeConverter::*)(::GlobalNamespace::IBeatToTimeConverter*)>(
    &::GlobalNamespace::BeatToTimeConverter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26beba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatToTimeConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatToTimeConverter.BeatToTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatToTimeConverter::*)(float_t)>(&::GlobalNamespace::BeatToTimeConverter::BeatToTime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26bebc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatToTimeConverter*>::get(), "BeatToTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatToTimeConverter*& GlobalNamespace::BeatToTimeConverter::__cordl_internal_get__bpmTimeProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmTimeProcessor;
}
constexpr ::GlobalNamespace::IBeatToTimeConverter* const& GlobalNamespace::BeatToTimeConverter::__cordl_internal_get__bpmTimeProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmTimeProcessor;
}
constexpr void GlobalNamespace::BeatToTimeConverter::__cordl_internal_set__bpmTimeProcessor(::GlobalNamespace::IBeatToTimeConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bpmTimeProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatToTimeConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatToTimeConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline float_t GlobalNamespace::BeatToTimeConverter::BeatToTime(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatToTimeConverter*>::get(), "BeatToTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beat);
}
inline ::GlobalNamespace::BeatToTimeConverter* GlobalNamespace::BeatToTimeConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatToTimeConverter*>(bpmTimeProcessor));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatToTimeConverter::BeatToTimeConverter() {}
