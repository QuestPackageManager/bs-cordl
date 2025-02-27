#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentIntensityReductionOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType::EnvironmentIntensityReductionOptions_CompressExpandReductionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType::EnvironmentIntensityReductionOptions_CompressExpandReductionType() {}
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType::Keep{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType::RemoveWithStrobeFilter{
  static_cast<int32_t>(0x1)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType::EnvironmentIntensityReductionOptions_RotateRingsReductionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType::EnvironmentIntensityReductionOptions_RotateRingsReductionType() {}
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType::Keep{ static_cast<int32_t>(
    0x0) };
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType::RemoveWithStrobeFilter{
  static_cast<int32_t>(0x1)
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentIntensityReductionOptions.get_compressExpand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType (
    ::GlobalNamespace::EnvironmentIntensityReductionOptions::*)()>(&::GlobalNamespace::EnvironmentIntensityReductionOptions::get_compressExpand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b3f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                                                                               "get_compressExpand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentIntensityReductionOptions.get_rotateRings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType (
    ::GlobalNamespace::EnvironmentIntensityReductionOptions::*)()>(&::GlobalNamespace::EnvironmentIntensityReductionOptions::get_rotateRings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b3f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                                                                               "get_rotateRings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentIntensityReductionOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentIntensityReductionOptions::*)()>(
    &::GlobalNamespace::EnvironmentIntensityReductionOptions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b3f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType& GlobalNamespace::EnvironmentIntensityReductionOptions::__cordl_internal_get__compressExpand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compressExpand;
}
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType const&
GlobalNamespace::EnvironmentIntensityReductionOptions::__cordl_internal_get__compressExpand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compressExpand;
}
constexpr void GlobalNamespace::EnvironmentIntensityReductionOptions::__cordl_internal_set__compressExpand(::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compressExpand = value;
}
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType& GlobalNamespace::EnvironmentIntensityReductionOptions::__cordl_internal_get__rotateRings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotateRings;
}
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType const& GlobalNamespace::EnvironmentIntensityReductionOptions::__cordl_internal_get__rotateRings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotateRings;
}
constexpr void GlobalNamespace::EnvironmentIntensityReductionOptions::__cordl_internal_set__rotateRings(::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotateRings = value;
}
inline ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType GlobalNamespace::EnvironmentIntensityReductionOptions::get_compressExpand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                                                                             "get_compressExpand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType GlobalNamespace::EnvironmentIntensityReductionOptions::get_rotateRings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                                                                             "get_rotateRings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentIntensityReductionOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentIntensityReductionOptions* GlobalNamespace::EnvironmentIntensityReductionOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentIntensityReductionOptions*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions::EnvironmentIntensityReductionOptions() {}
