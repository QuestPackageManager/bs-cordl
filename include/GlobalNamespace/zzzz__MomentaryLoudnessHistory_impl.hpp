#pragma once
// IWYU pragma private; include "GlobalNamespace/MomentaryLoudnessHistory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MomentaryLoudnessHistory_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessHistory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MomentaryLoudnessHistory::*)(int32_t)>(
    &::GlobalNamespace::MomentaryLoudnessHistory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3ad09c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessHistory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessHistory.GetAverageLoudness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MomentaryLoudnessHistory::*)()>(
    &::GlobalNamespace::MomentaryLoudnessHistory::GetAverageLoudness)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3ad0878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessHistory*>::get(),
                                                                               "GetAverageLoudness", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessHistory.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MomentaryLoudnessHistory::*)(float_t)>(&::GlobalNamespace::MomentaryLoudnessHistory::Add)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3ad07f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessHistory*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_get__rmsValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rmsValues;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_get__rmsValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rmsValues;
}
constexpr void GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_set__rmsValues(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rmsValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_get__nextRmsIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextRmsIndex;
}
constexpr int32_t const& GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_get__nextRmsIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextRmsIndex;
}
constexpr void GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_set__nextRmsIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextRmsIndex = value;
}
constexpr bool& GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_get__historyFull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyFull;
}
constexpr bool const& GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_get__historyFull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyFull;
}
constexpr void GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_set__historyFull(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____historyFull = value;
}
inline void GlobalNamespace::MomentaryLoudnessHistory::_ctor(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessHistory*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, length);
}
inline float_t GlobalNamespace::MomentaryLoudnessHistory::GetAverageLoudness() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessHistory*>::get(),
                                                                             "GetAverageLoudness", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MomentaryLoudnessHistory::Add(float_t momentaryLoudness) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessHistory*>::get(), "Add",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, momentaryLoudness);
}
inline ::GlobalNamespace::MomentaryLoudnessHistory* GlobalNamespace::MomentaryLoudnessHistory::New_ctor(int32_t length) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MomentaryLoudnessHistory*>(length));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MomentaryLoudnessHistory::MomentaryLoudnessHistory() {}
