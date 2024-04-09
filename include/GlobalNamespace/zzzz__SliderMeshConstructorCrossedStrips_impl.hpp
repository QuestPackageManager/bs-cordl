#pragma once
#include "GlobalNamespace/zzzz__SliderMeshConstructor_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMeshConstructorCrossedStrips_def.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructorCrossedStrips.CreateSliderMeshInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(::GlobalNamespace::VertexPath*)>(
    &::GlobalNamespace::SliderMeshConstructorCrossedStrips::CreateSliderMeshInternal)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x25acad8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructorCrossedStrips.GetVertexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(::GlobalNamespace::VertexPath*)>(
    &::GlobalNamespace::SliderMeshConstructorCrossedStrips::GetVertexCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25ace94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructorCrossedStrips.GetTrianglesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(::GlobalNamespace::VertexPath*)>(
    &::GlobalNamespace::SliderMeshConstructorCrossedStrips::GetTrianglesCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25aceb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructorCrossedStrips._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderMeshConstructorCrossedStrips::*)()>(
    &::GlobalNamespace::SliderMeshConstructorCrossedStrips::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x25aced4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::SliderMeshConstructorCrossedStrips::__cordl_internal_get__triangleMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triangleMap;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::SliderMeshConstructorCrossedStrips::__cordl_internal_get__triangleMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triangleMap;
}
constexpr void GlobalNamespace::SliderMeshConstructorCrossedStrips::__cordl_internal_set__triangleMap(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____triangleMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SliderMeshConstructorCrossedStrips::CreateSliderMeshInternal(::GlobalNamespace::VertexPath* path) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline int32_t GlobalNamespace::SliderMeshConstructorCrossedStrips::GetVertexCount(::GlobalNamespace::VertexPath* path) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, path);
}
inline int32_t GlobalNamespace::SliderMeshConstructorCrossedStrips::GetTrianglesCount(::GlobalNamespace::VertexPath* path) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, path);
}
inline ::GlobalNamespace::SliderMeshConstructorCrossedStrips* GlobalNamespace::SliderMeshConstructorCrossedStrips::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>());
}
inline void GlobalNamespace::SliderMeshConstructorCrossedStrips::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderMeshConstructorCrossedStrips::SliderMeshConstructorCrossedStrips() {}
