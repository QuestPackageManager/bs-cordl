#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VertexEntry_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VertexEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VertexEntry::*)(int32_t, int32_t, int32_t)>(
    &::HoudiniEngineUnity::HEU_VertexEntry::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2324204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VertexEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::HEU_VertexEntry::__cordl_internal_get__meshKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshKey;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VertexEntry::__cordl_internal_get__meshKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshKey;
}
constexpr void HoudiniEngineUnity::HEU_VertexEntry::__cordl_internal_set__meshKey(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshKey = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_VertexEntry::__cordl_internal_get__vertexIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertexIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VertexEntry::__cordl_internal_get__vertexIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertexIndex;
}
constexpr void HoudiniEngineUnity::HEU_VertexEntry::__cordl_internal_set__vertexIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vertexIndex = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_VertexEntry::__cordl_internal_get__normalIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VertexEntry::__cordl_internal_get__normalIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalIndex;
}
constexpr void HoudiniEngineUnity::HEU_VertexEntry::__cordl_internal_set__normalIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalIndex = value;
}
inline ::HoudiniEngineUnity::HEU_VertexEntry* HoudiniEngineUnity::HEU_VertexEntry::New_ctor(int32_t meshKey, int32_t vertexIndex, int32_t normalIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_VertexEntry*>(meshKey, vertexIndex, normalIndex));
}
inline void HoudiniEngineUnity::HEU_VertexEntry::_ctor(int32_t meshKey, int32_t vertexIndex, int32_t normalIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VertexEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, meshKey, vertexIndex, normalIndex);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_VertexEntry::HEU_VertexEntry() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
