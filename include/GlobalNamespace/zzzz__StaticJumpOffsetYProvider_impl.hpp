#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StaticJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__StaticJumpOffsetYProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__StaticJumpOffsetYProvider__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StaticJumpOffsetYProvider__InitData::*)(float_t)>(
    &::GlobalNamespace::__StaticJumpOffsetYProvider__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2395bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StaticJumpOffsetYProvider__InitData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__StaticJumpOffsetYProvider__InitData::__get_jumpyYOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpyYOffset;
}
constexpr float_t const& GlobalNamespace::__StaticJumpOffsetYProvider__InitData::__get_jumpyYOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpyYOffset;
}
constexpr void GlobalNamespace::__StaticJumpOffsetYProvider__InitData::__set_jumpyYOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jumpyYOffset = value;
}
inline ::GlobalNamespace::__StaticJumpOffsetYProvider__InitData* GlobalNamespace::__StaticJumpOffsetYProvider__InitData::New_ctor(float_t jumpyYOffset) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__StaticJumpOffsetYProvider__InitData*>(jumpyYOffset));
}
inline void GlobalNamespace::__StaticJumpOffsetYProvider__InitData::_ctor(float_t jumpyYOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StaticJumpOffsetYProvider__InitData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jumpyYOffset);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StaticJumpOffsetYProvider__InitData::__StaticJumpOffsetYProvider__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::StaticJumpOffsetYProvider.get_jumpOffsetY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StaticJumpOffsetYProvider::*)()>(
    &::GlobalNamespace::StaticJumpOffsetYProvider::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2395ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticJumpOffsetYProvider*>::get(),
                                                                               "get_jumpOffsetY", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticJumpOffsetYProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StaticJumpOffsetYProvider::*)()>(&::GlobalNamespace::StaticJumpOffsetYProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2395bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticJumpOffsetYProvider*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IJumpOffsetYProvider"
constexpr GlobalNamespace::StaticJumpOffsetYProvider::operator ::GlobalNamespace::IJumpOffsetYProvider*() noexcept {
  return static_cast<::GlobalNamespace::IJumpOffsetYProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IJumpOffsetYProvider"
constexpr ::GlobalNamespace::IJumpOffsetYProvider* GlobalNamespace::StaticJumpOffsetYProvider::i___GlobalNamespace__IJumpOffsetYProvider() noexcept {
  return static_cast<::GlobalNamespace::IJumpOffsetYProvider*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::__StaticJumpOffsetYProvider__InitData*& GlobalNamespace::StaticJumpOffsetYProvider::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StaticJumpOffsetYProvider__InitData*> const& GlobalNamespace::StaticJumpOffsetYProvider::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::StaticJumpOffsetYProvider::__set__initData(::GlobalNamespace::__StaticJumpOffsetYProvider__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t GlobalNamespace::StaticJumpOffsetYProvider::get_jumpOffsetY() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticJumpOffsetYProvider*>::get(),
                                                                             "get_jumpOffsetY", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StaticJumpOffsetYProvider* GlobalNamespace::StaticJumpOffsetYProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StaticJumpOffsetYProvider*>());
}
inline void GlobalNamespace::StaticJumpOffsetYProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticJumpOffsetYProvider*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticJumpOffsetYProvider::StaticJumpOffsetYProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
