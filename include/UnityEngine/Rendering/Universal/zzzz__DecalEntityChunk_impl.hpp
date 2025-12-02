#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalEntityChunk.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalChunk_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntity_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalProjector_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityChunk.Push
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityChunk::*)()>(
    &::UnityEngine::Rendering::Universal::DecalEntityChunk::Push)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663bfd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityChunk.RemoveAtSwapBack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityChunk::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalEntityChunk::RemoveAtSwapBack)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x663bfe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityChunk.SetCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityChunk::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalEntityChunk::SetCapacity)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x663c0ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityChunk.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityChunk::*)()>(
    &::UnityEngine::Rendering::Universal::DecalEntityChunk::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x663c148;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityChunk._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityChunk::*)()>(
    &::UnityEngine::Rendering::Universal::DecalEntityChunk::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x663c1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::DecalEntityChunk::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::DecalEntityChunk::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityChunk::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalEntity>& UnityEngine::Rendering::Universal::DecalEntityChunk::__cordl_internal_get_decalEntities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalEntities;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalEntity> const& UnityEngine::Rendering::Universal::DecalEntityChunk::__cordl_internal_get_decalEntities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalEntities;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityChunk::__cordl_internal_set_decalEntities(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalEntity> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decalEntities = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>>*>&
UnityEngine::Rendering::Universal::DecalEntityChunk::__cordl_internal_get_decalProjectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalProjectors;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>>*> const&
UnityEngine::Rendering::Universal::DecalEntityChunk::__cordl_internal_get_decalProjectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalProjectors;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityChunk::__cordl_internal_set_decalProjectors(
    ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___decalProjectors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Jobs::TransformAccessArray& UnityEngine::Rendering::Universal::DecalEntityChunk::__cordl_internal_get_transformAccessArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transformAccessArray;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray const& UnityEngine::Rendering::Universal::DecalEntityChunk::__cordl_internal_get_transformAccessArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transformAccessArray;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityChunk::__cordl_internal_set_transformAccessArray(::UnityEngine::Jobs::TransformAccessArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transformAccessArray = value;
}
inline void UnityEngine::Rendering::Universal::DecalEntityChunk::Push() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalEntityChunk::RemoveAtSwapBack(int32_t entityIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entityIndex);
}
inline void UnityEngine::Rendering::Universal::DecalEntityChunk::SetCapacity(int32_t newCapacity) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::Universal::DecalEntityChunk::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalEntityChunk::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalEntityChunk* UnityEngine::Rendering::Universal::DecalEntityChunk::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalEntityChunk*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalEntityChunk::DecalEntityChunk() {}
