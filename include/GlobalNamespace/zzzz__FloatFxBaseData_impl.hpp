#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxBaseData.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__FxBaseData_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxBaseData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxBaseData::*)(float_t, bool, float_t, ::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::FloatFxBaseData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x14b8fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::FloatFxBaseData::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr float_t const& GlobalNamespace::FloatFxBaseData::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::FloatFxBaseData::__cordl_internal_set_value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::FloatFxBaseData::__cordl_internal_get_easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::FloatFxBaseData::__cordl_internal_get_easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr void GlobalNamespace::FloatFxBaseData::__cordl_internal_set_easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easeType = value;
}
inline ::GlobalNamespace::FloatFxBaseData* GlobalNamespace::FloatFxBaseData::New_ctor(float_t beat, bool usePreviousEventValue, float_t value, ::GlobalNamespace::EaseType easeType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FloatFxBaseData*>(beat, usePreviousEventValue, value, easeType));
}
inline void GlobalNamespace::FloatFxBaseData::_ctor(float_t beat, bool usePreviousEventValue, float_t value, ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, usePreviousEventValue, value, easeType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxBaseData::FloatFxBaseData() {}
