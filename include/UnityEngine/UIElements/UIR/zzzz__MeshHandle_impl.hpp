#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Page_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshHandle::*)()>(&::UnityEngine::UIElements::UIR::MeshHandle::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c677f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshHandle*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::Alloc& UnityEngine::UIElements::UIR::MeshHandle::__get_allocVerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocVerts;
}
constexpr ::UnityEngine::UIElements::UIR::Alloc const& UnityEngine::UIElements::UIR::MeshHandle::__get_allocVerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocVerts;
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__set_allocVerts(::UnityEngine::UIElements::UIR::Alloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allocVerts = value;
}
constexpr ::UnityEngine::UIElements::UIR::Alloc& UnityEngine::UIElements::UIR::MeshHandle::__get_allocIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocIndices;
}
constexpr ::UnityEngine::UIElements::UIR::Alloc const& UnityEngine::UIElements::UIR::MeshHandle::__get_allocIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocIndices;
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__set_allocIndices(::UnityEngine::UIElements::UIR::Alloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allocIndices = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::MeshHandle::__get_triangleCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triangleCount;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::MeshHandle::__get_triangleCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triangleCount;
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__set_triangleCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___triangleCount = value;
}
constexpr ::UnityEngine::UIElements::UIR::Page*& UnityEngine::UIElements::UIR::MeshHandle::__get_allocPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocPage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Page*> const& UnityEngine::UIElements::UIR::MeshHandle::__get_allocPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocPage;
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__set_allocPage(::UnityEngine::UIElements::UIR::Page* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allocPage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::UIElements::UIR::MeshHandle::__get_allocTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocTime;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::MeshHandle::__get_allocTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocTime;
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__set_allocTime(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allocTime = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::MeshHandle::__get_updateAllocID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateAllocID;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::MeshHandle::__get_updateAllocID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateAllocID;
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__set_updateAllocID(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___updateAllocID = value;
}
inline ::UnityEngine::UIElements::UIR::MeshHandle* UnityEngine::UIElements::UIR::MeshHandle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::MeshHandle*>());
}
inline void UnityEngine::UIElements::UIR::MeshHandle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshHandle*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshHandle::MeshHandle() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
