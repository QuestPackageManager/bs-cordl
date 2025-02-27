#pragma once
// IWYU pragma private; include "GlobalNamespace/PathsHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PathsHolder_def.hpp"
#include "GlobalNamespace/zzzz__BezierPath_def.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PathsHolder.get_bezierPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BezierPath* (::GlobalNamespace::PathsHolder::*)()>(
    &::GlobalNamespace::PathsHolder::get_bezierPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3f274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(), "get_bezierPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PathsHolder.get_vertexPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VertexPath* (::GlobalNamespace::PathsHolder::*)()>(
    &::GlobalNamespace::PathsHolder::get_vertexPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3f27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(), "get_vertexPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PathsHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PathsHolder::*)(int32_t, bool)>(&::GlobalNamespace::PathsHolder::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3b3f284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PathsHolder.UpdateVertexPathByBezierPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PathsHolder::*)()>(&::GlobalNamespace::PathsHolder::UpdateVertexPathByBezierPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3b3f8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(),
                                                                               "UpdateVertexPathByBezierPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BezierPath*& GlobalNamespace::PathsHolder::__cordl_internal_get__bezierPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bezierPath;
}
constexpr ::GlobalNamespace::BezierPath* const& GlobalNamespace::PathsHolder::__cordl_internal_get__bezierPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bezierPath;
}
constexpr void GlobalNamespace::PathsHolder::__cordl_internal_set__bezierPath(::GlobalNamespace::BezierPath* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bezierPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::VertexPath*& GlobalNamespace::PathsHolder::__cordl_internal_get__vertexPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertexPath;
}
constexpr ::GlobalNamespace::VertexPath* const& GlobalNamespace::PathsHolder::__cordl_internal_get__vertexPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertexPath;
}
constexpr void GlobalNamespace::PathsHolder::__cordl_internal_set__vertexPath(::GlobalNamespace::VertexPath* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vertexPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BezierPath* GlobalNamespace::PathsHolder::get_bezierPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(), "get_bezierPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BezierPath*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VertexPath* GlobalNamespace::PathsHolder::get_vertexPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(), "get_vertexPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VertexPath*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PathsHolder::_ctor(int32_t numberOfFixedVertexPathSegments, bool updateVertexPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfFixedVertexPathSegments, updateVertexPath);
}
inline void GlobalNamespace::PathsHolder::UpdateVertexPathByBezierPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(),
                                                                             "UpdateVertexPathByBezierPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PathsHolder* GlobalNamespace::PathsHolder::New_ctor(int32_t numberOfFixedVertexPathSegments, bool updateVertexPath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PathsHolder*>(numberOfFixedVertexPathSegments, updateVertexPath));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PathsHolder::PathsHolder() {}
