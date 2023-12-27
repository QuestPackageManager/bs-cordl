#pragma once
#include "GlobalNamespace/zzzz__FxBaseData_impl.hpp"
#include "GlobalNamespace/zzzz__IntFxBaseData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IntFxBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IntFxBaseData::*)(float_t, bool, int32_t)>(&::GlobalNamespace::IntFxBaseData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2335fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IntFxBaseData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::IntFxBaseData::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr int32_t const& GlobalNamespace::IntFxBaseData::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::IntFxBaseData::__set_value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___value = value;
}
inline ::GlobalNamespace::IntFxBaseData* GlobalNamespace::IntFxBaseData::New_ctor(float_t beat, bool usePreviousEventValue, int32_t value) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::IntFxBaseData*>(beat, usePreviousEventValue, value));
}
inline void GlobalNamespace::IntFxBaseData::_ctor(float_t beat, bool usePreviousEventValue, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IntFxBaseData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, usePreviousEventValue, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IntFxBaseData::IntFxBaseData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
