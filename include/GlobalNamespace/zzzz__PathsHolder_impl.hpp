#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PathsHolder_def.hpp"
#include "GlobalNamespace/zzzz__BezierPath_def.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PathsHolder.get_bezierPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BezierPath* (::GlobalNamespace::PathsHolder::*)()>(
    &::GlobalNamespace::PathsHolder::get_bezierPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230be58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(), "get_bezierPath",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PathsHolder.get_vertexPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VertexPath* (::GlobalNamespace::PathsHolder::*)()>(
    &::GlobalNamespace::PathsHolder::get_vertexPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230be60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(), "get_vertexPath",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PathsHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PathsHolder::*)(int32_t, bool)>(&::GlobalNamespace::PathsHolder::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x230be68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PathsHolder.UpdateVertexPathByBezierPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PathsHolder::*)()>(&::GlobalNamespace::PathsHolder::UpdateVertexPathByBezierPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x230c4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(),
                                                                               "UpdateVertexPathByBezierPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BezierPath*& GlobalNamespace::PathsHolder::__get__bezierPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bezierPath;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierPath*> const& GlobalNamespace::PathsHolder::__get__bezierPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bezierPath;
}
constexpr void GlobalNamespace::PathsHolder::__set__bezierPath(::GlobalNamespace::BezierPath* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bezierPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::VertexPath*& GlobalNamespace::PathsHolder::__get__vertexPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertexPath;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VertexPath*> const& GlobalNamespace::PathsHolder::__get__vertexPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertexPath;
}
constexpr void GlobalNamespace::PathsHolder::__set__vertexPath(::GlobalNamespace::VertexPath* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vertexPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BezierPath* GlobalNamespace::PathsHolder::get_bezierPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(), "get_bezierPath",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BezierPath*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VertexPath* GlobalNamespace::PathsHolder::get_vertexPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(), "get_vertexPath",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VertexPath*, false>(this, ___internal_method);
}
/// @param updateVertexPath: bool (default: true)
inline ::GlobalNamespace::PathsHolder* GlobalNamespace::PathsHolder::New_ctor(int32_t numberOfFixedVertexPathSegments, bool updateVertexPath) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PathsHolder*>(numberOfFixedVertexPathSegments, updateVertexPath));
}
/// @param updateVertexPath: bool (default: true)
inline void GlobalNamespace::PathsHolder::_ctor(int32_t numberOfFixedVertexPathSegments, bool updateVertexPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfFixedVertexPathSegments, updateVertexPath);
}
inline void GlobalNamespace::PathsHolder::UpdateVertexPathByBezierPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PathsHolder*>::get(),
                                                                             "UpdateVertexPathByBezierPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PathsHolder::PathsHolder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
