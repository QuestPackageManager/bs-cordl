#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__Triangulation_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__Triangulation_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PolygonPoint_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0._Triangulate_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::*)(::UnityEngine::Vector2)>(
        &::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::_Triangulate_b__0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2bc3168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0*>::get(), "<Triangulate>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0._Triangulate_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* (::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::*)(::UnityEngine::Vector2)>(
        &::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::_Triangulate_b__1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2bc31f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0*>::get(), "<Triangulate>b__1",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::__get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___index;
}
constexpr int32_t const& UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::__get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___index;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::__set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___index = value;
}
inline ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0* UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::_Triangulate_b__0(::UnityEngine::Vector2 x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0*>::get(), "<Triangulate>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::_Triangulate_b__1(::UnityEngine::Vector2 x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0*>::get(), "<Triangulate>b__1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0::__Triangulation____c__DisplayClass7_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0._Triangulate_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* (::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::*)(::UnityEngine::Vector2)>(
        &::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::_Triangulate_b__0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2bc3278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0*>::get(), "<Triangulate>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0._Triangulate_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* (::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::*)(::UnityEngine::Vector2)>(
        &::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::_Triangulate_b__1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2bc3300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0*>::get(), "<Triangulate>b__1",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::__get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___index;
}
constexpr int32_t const& UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::__get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___index;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::__set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___index = value;
}
constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*&
UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::__get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____9__1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*> const&
UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::__get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____9__1;
}
constexpr void
UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::__set___9__1(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0* UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::_Triangulate_b__0(::UnityEngine::Vector2 x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0*>::get(), "<Triangulate>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::_Triangulate_b__1(::UnityEngine::Vector2 x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0*>::get(), "<Triangulate>b__1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0::__Triangulation____c__DisplayClass8_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.get_triangulationContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* (*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::Triangulation::get_triangulationContext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2bc1024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(),
                                                                               "get_triangulationContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.SortAndTriangulate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ByRef<::System::Collections::Generic::List_1<int32_t>*>, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::Triangulation::SortAndTriangulate)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x2bc10b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(), "SortAndTriangulate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.TriangulateVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ByRef<::System::Collections::Generic::List_1<int32_t>*>, bool, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2bc1f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(), "TriangulateVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.TriangulateVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ByRef<::System::Collections::Generic::List_1<int32_t>*>,
                         ::ArrayW<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::Array<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>*>)>(
        &::UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2bc2390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(), "TriangulateVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<int32_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::Array<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.TriangulateVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ByRef<::System::Collections::Generic::List_1<int32_t>*>, bool, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2bc216c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(), "TriangulateVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.Triangulate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ByRef<::System::Collections::Generic::List_1<int32_t>*>, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate)> {
  constexpr static std::size_t size = 0xb94;
  constexpr static std::size_t addrs = 0x2bc13cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(), "Triangulate", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<int32_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.Triangulate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>*,
                         ByRef<::System::Collections::Generic::List_1<int32_t>*>)>(&::UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate)> {
  constexpr static std::size_t size = 0xc1c;
  constexpr static std::size_t addrs = 0x2bc253c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(), "Triangulate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::Triangulation::setStaticF_s_TriangulationContext(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*, "s_TriangulationContext",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get>(
      std::forward<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>(value));
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* UnityEngine::ProBuilder::MeshOperations::Triangulation::getStaticF_s_TriangulationContext() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*, "s_TriangulationContext",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get>();
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* UnityEngine::ProBuilder::MeshOperations::Triangulation::get_triangulationContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(),
                                                                             "get_triangulationContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*, false>(nullptr, ___internal_method);
}
/// @param convex: bool (default: false)
inline bool UnityEngine::ProBuilder::MeshOperations::Triangulation::SortAndTriangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points,
                                                                                       ByRef<::System::Collections::Generic::List_1<int32_t>*> indexes, bool convex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(), "SortAndTriangulate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<int32_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, points, indexes, convex);
}
/// @param unordered: bool (default: true)
/// @param convex: bool (default: false)
inline bool UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                                        ByRef<::System::Collections::Generic::List_1<int32_t>*> triangles, bool unordered, bool convex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(), "TriangulateVertices", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<int32_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, vertices, triangles, unordered, convex);
}
/// @param holes: ::ArrayW<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>,::Array<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>*> (default: nullptr)
inline bool UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, ByRef<::System::Collections::Generic::List_1<int32_t>*> triangles,
    ::ArrayW<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::Array<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>*> holes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(), "TriangulateVertices", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<int32_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::Array<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, vertices, triangles, holes);
}
/// @param unordered: bool (default: true)
/// @param convex: bool (default: false)
inline bool UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices,
                                                                                        ByRef<::System::Collections::Generic::List_1<int32_t>*> triangles, bool unordered, bool convex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(), "TriangulateVertices", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<int32_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, vertices, triangles, unordered, convex);
}
/// @param convex: bool (default: false)
inline bool UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points,
                                                                                ByRef<::System::Collections::Generic::List_1<int32_t>*> indexes, bool convex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(), "Triangulate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<int32_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, points, indexes, convex);
}
inline bool UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points,
                                                                                ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>* holes,
                                                                                ByRef<::System::Collections::Generic::List_1<int32_t>*> indexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>::get(), "Triangulate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, points, holes, indexes);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
