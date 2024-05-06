#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatToTimeConverterProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatToTimeConverterProvider::*)(::GlobalNamespace::IBeatToTimeConverter*)>(
    &::GlobalNamespace::BeatToTimeConverterProvider::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x14b0910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatToTimeConverterProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatToTimeConverterProvider.BeatToTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatToTimeConverterProvider::*)(float_t)>(
    &::GlobalNamespace::BeatToTimeConverterProvider::BeatToTime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x14b0938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatToTimeConverterProvider*>::get(), "BeatToTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatToTimeConverter*& GlobalNamespace::BeatToTimeConverterProvider::__cordl_internal_get__bpmTimeProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmTimeProcessor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatToTimeConverter*> const& GlobalNamespace::BeatToTimeConverterProvider::__cordl_internal_get__bpmTimeProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmTimeProcessor;
}
constexpr void GlobalNamespace::BeatToTimeConverterProvider::__cordl_internal_set__bpmTimeProcessor(::GlobalNamespace::IBeatToTimeConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bpmTimeProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatToTimeConverterProvider* GlobalNamespace::BeatToTimeConverterProvider::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatToTimeConverterProvider*>(bpmTimeProcessor));
}
inline void GlobalNamespace::BeatToTimeConverterProvider::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatToTimeConverterProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline float_t GlobalNamespace::BeatToTimeConverterProvider::BeatToTime(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatToTimeConverterProvider*>::get(), "BeatToTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beat);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatToTimeConverterProvider::BeatToTimeConverterProvider() {}
