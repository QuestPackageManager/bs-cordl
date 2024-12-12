#pragma once
// IWYU pragma private; include "GlobalNamespace/SongSpeedData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SongSpeedData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongSpeedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongSpeedData::*)(float_t)>(&::GlobalNamespace::SongSpeedData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26ae530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongSpeedData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SongSpeedData::__cordl_internal_get_speedMul() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speedMul;
}
constexpr float_t const& GlobalNamespace::SongSpeedData::__cordl_internal_get_speedMul() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speedMul;
}
constexpr void GlobalNamespace::SongSpeedData::__cordl_internal_set_speedMul(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___speedMul = value;
}
inline void GlobalNamespace::SongSpeedData::_ctor(float_t speedMul) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongSpeedData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, speedMul);
}
inline ::GlobalNamespace::SongSpeedData* GlobalNamespace::SongSpeedData::New_ctor(float_t speedMul) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SongSpeedData*>(speedMul));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongSpeedData::SongSpeedData() {}
