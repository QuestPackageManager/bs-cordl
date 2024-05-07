#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomValueToShader.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__RandomValueToShader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomValueToShader.SetRandomValueToShaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RandomValueToShader::*)()>(
    &::GlobalNamespace::RandomValueToShader::SetRandomValueToShaders)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24edef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomValueToShader*>::get(),
                                                                               "SetRandomValueToShaders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomValueToShader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RandomValueToShader::*)()>(&::GlobalNamespace::RandomValueToShader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24edf88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomValueToShader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RandomValueToShader::__cordl_internal_get__lastFrameNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameNum;
}
constexpr int32_t const& GlobalNamespace::RandomValueToShader::__cordl_internal_get__lastFrameNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameNum;
}
constexpr void GlobalNamespace::RandomValueToShader::__cordl_internal_set__lastFrameNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFrameNum = value;
}
inline void GlobalNamespace::RandomValueToShader::setStaticF__randomValueID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_randomValueID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomValueToShader*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::RandomValueToShader::getStaticF__randomValueID() {
  return ::cordl_internals::getStaticField<int32_t, "_randomValueID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomValueToShader*>::get>();
}
inline void GlobalNamespace::RandomValueToShader::SetRandomValueToShaders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomValueToShader*>::get(),
                                                                             "SetRandomValueToShaders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomValueToShader* GlobalNamespace::RandomValueToShader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RandomValueToShader*>());
}
inline void GlobalNamespace::RandomValueToShader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomValueToShader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomValueToShader::RandomValueToShader() {}
