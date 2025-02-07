#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticJumpOffsetYProvider.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StaticJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__StaticJumpOffsetYProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticJumpOffsetYProvider_InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StaticJumpOffsetYProvider_InitData::*)(float_t)>(
    &::GlobalNamespace::StaticJumpOffsetYProvider_InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b81920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticJumpOffsetYProvider_InitData*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::StaticJumpOffsetYProvider_InitData::__cordl_internal_get_jumpyYOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpyYOffset;
}
constexpr float_t const& GlobalNamespace::StaticJumpOffsetYProvider_InitData::__cordl_internal_get_jumpyYOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpyYOffset;
}
constexpr void GlobalNamespace::StaticJumpOffsetYProvider_InitData::__cordl_internal_set_jumpyYOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jumpyYOffset = value;
}
inline void GlobalNamespace::StaticJumpOffsetYProvider_InitData::_ctor(float_t jumpyYOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticJumpOffsetYProvider_InitData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jumpyYOffset);
}
inline ::GlobalNamespace::StaticJumpOffsetYProvider_InitData* GlobalNamespace::StaticJumpOffsetYProvider_InitData::New_ctor(float_t jumpyYOffset) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StaticJumpOffsetYProvider_InitData*>(jumpyYOffset));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticJumpOffsetYProvider_InitData::StaticJumpOffsetYProvider_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::StaticJumpOffsetYProvider.get_jumpOffsetY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StaticJumpOffsetYProvider::*)()>(
    &::GlobalNamespace::StaticJumpOffsetYProvider::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b818fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticJumpOffsetYProvider*>::get(),
                                                                               "get_jumpOffsetY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticJumpOffsetYProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StaticJumpOffsetYProvider::*)()>(&::GlobalNamespace::StaticJumpOffsetYProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b81918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticJumpOffsetYProvider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StaticJumpOffsetYProvider_InitData*& GlobalNamespace::StaticJumpOffsetYProvider::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::StaticJumpOffsetYProvider_InitData* const& GlobalNamespace::StaticJumpOffsetYProvider::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::StaticJumpOffsetYProvider::__cordl_internal_set__initData(::GlobalNamespace::StaticJumpOffsetYProvider_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t GlobalNamespace::StaticJumpOffsetYProvider::get_jumpOffsetY() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticJumpOffsetYProvider*>::get(),
                                                                             "get_jumpOffsetY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::StaticJumpOffsetYProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticJumpOffsetYProvider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StaticJumpOffsetYProvider* GlobalNamespace::StaticJumpOffsetYProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StaticJumpOffsetYProvider*>());
}
/// @brief Convert operator to "::GlobalNamespace::IJumpOffsetYProvider"
constexpr GlobalNamespace::StaticJumpOffsetYProvider::operator ::GlobalNamespace::IJumpOffsetYProvider*() noexcept {
  return static_cast<::GlobalNamespace::IJumpOffsetYProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IJumpOffsetYProvider"
constexpr ::GlobalNamespace::IJumpOffsetYProvider* GlobalNamespace::StaticJumpOffsetYProvider::i___GlobalNamespace__IJumpOffsetYProvider() noexcept {
  return static_cast<::GlobalNamespace::IJumpOffsetYProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticJumpOffsetYProvider::StaticJumpOffsetYProvider() {}
