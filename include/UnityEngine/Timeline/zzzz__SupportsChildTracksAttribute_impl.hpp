#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__SupportsChildTracksAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::SupportsChildTracksAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::SupportsChildTracksAttribute::*)(::System::Type*, int32_t)>(
    &::UnityEngine::Timeline::SupportsChildTracksAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c6e728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SupportsChildTracksAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::Timeline::SupportsChildTracksAttribute::__get_childType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___childType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::Timeline::SupportsChildTracksAttribute::__get_childType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___childType;
}
constexpr void UnityEngine::Timeline::SupportsChildTracksAttribute::__set_childType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___childType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Timeline::SupportsChildTracksAttribute::__get_levels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___levels;
}
constexpr int32_t const& UnityEngine::Timeline::SupportsChildTracksAttribute::__get_levels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___levels;
}
constexpr void UnityEngine::Timeline::SupportsChildTracksAttribute::__set_levels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___levels = value;
}
/// @param childType: ::System::Type* (default: nullptr)
/// @param levels: int32_t (default: static_cast<int32_t>(0x7fffffff))
inline ::UnityEngine::Timeline::SupportsChildTracksAttribute* UnityEngine::Timeline::SupportsChildTracksAttribute::New_ctor(::System::Type* childType, int32_t levels) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::SupportsChildTracksAttribute*>(childType, levels));
}
/// @param childType: ::System::Type* (default: nullptr)
/// @param levels: int32_t (default: static_cast<int32_t>(0x7fffffff))
inline void UnityEngine::Timeline::SupportsChildTracksAttribute::_ctor(::System::Type* childType, int32_t levels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SupportsChildTracksAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, childType, levels);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::SupportsChildTracksAttribute::SupportsChildTracksAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
