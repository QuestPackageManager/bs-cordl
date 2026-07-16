#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalDrawCallChunk.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalChunk_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSubDrawCall_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawCallChunk_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawCallChunk.set_subCallCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawCallChunk::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalDrawCallChunk::set_subCallCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6854870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), { "set_subCallCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawCallChunk.get_subCallCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DecalDrawCallChunk::*)()>(
    &::UnityEngine::Rendering::Universal::DecalDrawCallChunk::get_subCallCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x685487c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), { "get_subCallCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawCallChunk.RemoveAtSwapBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawCallChunk::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalDrawCallChunk::RemoveAtSwapBack)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6854888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawCallChunk.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawCallChunk::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalDrawCallChunk::SetCapacity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x685497c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawCallChunk.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawCallChunk::*)()>(&::UnityEngine::Rendering::Universal::DecalDrawCallChunk::Dispose)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6854a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawCallChunk._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawCallChunk::*)()>(&::UnityEngine::Rendering::Universal::DecalDrawCallChunk::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6854b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>& UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_get_decalToWorlds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalToWorlds;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> const& UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_get_decalToWorlds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalToWorlds;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_set_decalToWorlds(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decalToWorlds = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>& UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_get_normalToDecals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalToDecals;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> const& UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_get_normalToDecals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalToDecals;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_set_normalToDecals(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalToDecals = value;
}
constexpr ::Unity::Collections::NativeArray_1<float_t>& UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_get_renderingLayerMasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerMasks;
}
constexpr ::Unity::Collections::NativeArray_1<float_t> const& UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_get_renderingLayerMasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerMasks;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_set_renderingLayerMasks(::Unity::Collections::NativeArray_1<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderingLayerMasks = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall>& UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_get_subCalls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subCalls;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall> const&
UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_get_subCalls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subCalls;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_set_subCalls(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subCalls = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_get_subCallCounts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subCallCounts;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_get_subCallCounts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subCallCounts;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawCallChunk::__cordl_internal_set_subCallCounts(::Unity::Collections::NativeArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subCallCounts = value;
}
inline void UnityEngine::Rendering::Universal::DecalDrawCallChunk::set_subCallCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), { "set_subCallCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::DecalDrawCallChunk::get_subCallCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), { "get_subCallCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalDrawCallChunk::RemoveAtSwapBack(int32_t entityIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityIndex);
}
inline void UnityEngine::Rendering::Universal::DecalDrawCallChunk::SetCapacity(int32_t newCapacity) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::Universal::DecalDrawCallChunk::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalDrawCallChunk::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* UnityEngine::Rendering::Universal::DecalDrawCallChunk::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalDrawCallChunk::DecalDrawCallChunk() {}
