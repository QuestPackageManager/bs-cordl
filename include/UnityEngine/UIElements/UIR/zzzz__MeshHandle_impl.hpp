#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshHandle.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Page_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshHandle::*)()>(&::UnityEngine::UIElements::UIR::MeshHandle::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x49b53ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshHandle*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::Alloc& UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_get_allocVerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocVerts;
}
constexpr ::UnityEngine::UIElements::UIR::Alloc const& UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_get_allocVerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocVerts;
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_set_allocVerts(::UnityEngine::UIElements::UIR::Alloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allocVerts = value;
}
constexpr ::UnityEngine::UIElements::UIR::Alloc& UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_get_allocIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocIndices;
}
constexpr ::UnityEngine::UIElements::UIR::Alloc const& UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_get_allocIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocIndices;
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_set_allocIndices(::UnityEngine::UIElements::UIR::Alloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allocIndices = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_get_triangleCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triangleCount;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_get_triangleCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triangleCount;
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_set_triangleCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___triangleCount = value;
}
constexpr ::UnityEngine::UIElements::UIR::Page*& UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_get_allocPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocPage;
}
constexpr ::UnityEngine::UIElements::UIR::Page* const& UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_get_allocPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocPage;
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_set_allocPage(::UnityEngine::UIElements::UIR::Page* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allocPage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_get_allocTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocTime;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_get_allocTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocTime;
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_set_allocTime(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allocTime = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_get_updateAllocID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateAllocID;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_get_updateAllocID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateAllocID;
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__cordl_internal_set_updateAllocID(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___updateAllocID = value;
}
inline void UnityEngine::UIElements::UIR::MeshHandle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshHandle*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::MeshHandle* UnityEngine::UIElements::UIR::MeshHandle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::MeshHandle*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshHandle::MeshHandle() {}
