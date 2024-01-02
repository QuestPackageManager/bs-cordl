#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Triangle_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__MeshValidation_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__MeshValidation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Triangle_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy::__MeshValidation__AttributeValidationStrategy(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy::__MeshValidation__AttributeValidationStrategy() {}
constexpr ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy::Resize{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy::Nullify{
  static_cast<int32_t>(0x1)
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bbe758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c._EnsureFacesAreComposedOfContiguousTriangles_b__4_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::*)(::UnityEngine::ProBuilder::Triangle)>(
        &::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::_EnsureFacesAreComposedOfContiguousTriangles_b__4_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bbe760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get(), "<EnsureFacesAreComposedOfContiguousTriangles>b__4_0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Triangle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c._EnsureFacesAreComposedOfContiguousTriangles_b__4_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::*)(::UnityEngine::ProBuilder::Triangle)>(
        &::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::_EnsureFacesAreComposedOfContiguousTriangles_b__4_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bbe788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get(), "<EnsureFacesAreComposedOfContiguousTriangles>b__4_1",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Triangle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c._RemoveUnusedVertices_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::*)(::UnityEngine::ProBuilder::Face*)>(
        &::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::_RemoveUnusedVertices_b__7_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2bbe7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get(), "<RemoveUnusedVertices>b__7_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c* UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::setStaticF___9__4_0(
    ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__4_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*
UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__4_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::setStaticF___9__4_1(
    ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__4_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*
UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::getStaticF___9__4_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__4_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::setStaticF___9__7_0(
    ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__7_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*
UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__7_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get>();
}
inline ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c* UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>*
UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::_EnsureFacesAreComposedOfContiguousTriangles_b__4_0(::UnityEngine::ProBuilder::Triangle x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get(), "<EnsureFacesAreComposedOfContiguousTriangles>b__4_0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Triangle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>*
UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::_EnsureFacesAreComposedOfContiguousTriangles_b__4_1(::UnityEngine::ProBuilder::Triangle x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get(), "<EnsureFacesAreComposedOfContiguousTriangles>b__4_1",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Triangle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::_RemoveUnusedVertices_b__7_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*>::get(), "<RemoveUnusedVertices>b__7_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c::__MeshValidation____c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bbca4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0._CollectFaceGroups_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::*)(
    ::UnityEngine::ProBuilder::Triangle)>(&::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::_CollectFaceGroups_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2bbe7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0*>::get(), "<CollectFaceGroups>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Triangle>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Triangle& UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::__get_triangle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triangle;
}
constexpr ::UnityEngine::ProBuilder::Triangle const& UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::__get_triangle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triangle;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::__set_triangle(::UnityEngine::ProBuilder::Triangle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___triangle = value;
}
constexpr ::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>*& UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::__get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>*> const&
UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::__get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::__set___9__0(::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0* UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::_CollectFaceGroups_b__0(::UnityEngine::ProBuilder::Triangle x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0*>::get(), "<CollectFaceGroups>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Triangle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0::__MeshValidation____c__DisplayClass5_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bbde38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0._RebuildSelectionIndexes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0::*)(
    ::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0::_RebuildSelectionIndexes_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bbe7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0*>::get(), "<RebuildSelectionIndexes>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh*& UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0::__get_mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::ProBuilderMesh*> const& UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0::__get_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0::__set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0* UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0::_RebuildSelectionIndexes_b__0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0*>::get(), "<RebuildSelectionIndexes>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0::__MeshValidation____c__DisplayClass10_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.ContainsDegenerateTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2bbb894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "ContainsDegenerateTriangles", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.ContainsDegenerateTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x2bbb8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "ContainsDegenerateTriangles", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.ContainsDegenerateTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2bbbd04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "ContainsDegenerateTriangles", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.ContainsNonContiguousTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsNonContiguousTriangles)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2bbbe58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "ContainsNonContiguousTriangles", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureFacesAreComposedOfContiguousTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureFacesAreComposedOfContiguousTriangles)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x2bbbf90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureFacesAreComposedOfContiguousTriangles",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.CollectFaceGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::CollectFaceGroups)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x2bbc680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "CollectFaceGroups", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RemoveDegenerateTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveDegenerateTriangles)> {
  constexpr static std::size_t size = 0x954;
  constexpr static std::size_t addrs = 0x2bbca54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "RemoveDegenerateTriangles", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RemoveUnusedVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveUnusedVertices)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2bb9724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "RemoveUnusedVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RebuildIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<int32_t>* (*)(::System::Collections::Generic::IEnumerable_1<int32_t>*, ::System::Collections::Generic::List_1<int32_t>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildIndexes)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x2bbd3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "RebuildIndexes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RebuildEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::Edge>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildEdges)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x2bbd7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "RebuildEdges", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RebuildSelectionIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>,
    ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>, ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildSelectionIndexes)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2bbdc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "RebuildSelectionIndexes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureMeshIsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ByRef<int32_t>)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureMeshIsValid)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2bbde40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureMeshIsValid", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureRealNumbers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2bbe198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureRealNumbers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureRealNumbers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2bbe358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureRealNumbers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureRealNumbers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2bbe524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureRealNumbers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureValidAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureValidAttributes)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2bbdf80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureValidAttributes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "ContainsDegenerateTriangles", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                 ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "ContainsDegenerateTriangles", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, faces);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "ContainsDegenerateTriangles", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, face);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsNonContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "ContainsNonContiguousTriangles", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, face);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureFacesAreComposedOfContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                     ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureFacesAreComposedOfContiguousTriangles",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*, false>(nullptr, ___internal_method, mesh, faces);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>*
UnityEngine::ProBuilder::MeshOperations::MeshValidation::CollectFaceGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "CollectFaceGroups", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>*, false>(nullptr, ___internal_method,
                                                                                                                                                                           mesh, face);
}
/// @param removed: ::System::Collections::Generic::List_1<int32_t>* (default: nullptr)
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                               ::System::Collections::Generic::List_1<int32_t>* removed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "RemoveDegenerateTriangles", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, removed);
}
/// @param removed: ::System::Collections::Generic::List_1<int32_t>* (default: nullptr)
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<int32_t>* removed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "RemoveUnusedVertices", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, removed);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildIndexes(::System::Collections::Generic::IEnumerable_1<int32_t>* indices,
                                                                                                                                ::System::Collections::Generic::List_1<int32_t>* removed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "RebuildIndexes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*, false>(nullptr, ___internal_method, indices, removed);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                      ::System::Collections::Generic::List_1<int32_t>* removed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "RebuildEdges", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*, false>(nullptr, ___internal_method, edges, removed);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildSelectionIndexes(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                             ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>> faces,
                                                                                             ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>> edges,
                                                                                             ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> indices,
                                                                                             ::System::Collections::Generic::IEnumerable_1<int32_t>* removed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "RebuildSelectionIndexes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, faces, edges, indices, removed);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureMeshIsValid(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ByRef<int32_t> removedVertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureMeshIsValid", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, removedVertices);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* attribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureRealNumbers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attribute);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* attribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureRealNumbers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attribute);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* attribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureRealNumbers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attribute);
}
/// @param strategy: ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy (default: static_cast<int32_t>(0x1))
/// @param fill: T (default: nullptr)
template <typename T>
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureArraySize(ByRef<::ArrayW<T, ::Array<T>*>> attribute, int32_t expectedVertexCount,
                                                                                     ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy strategy, T fill) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureArraySize",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T, ::Array<T>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attribute, expectedVertexCount, strategy, fill);
}
/// @param strategy: ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy (default: static_cast<int32_t>(0x1))
/// @param fill: T (default: nullptr)
template <typename T>
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureListSize(ByRef<::System::Collections::Generic::List_1<T>*> attribute, int32_t expectedVertexCount,
                                                                                    ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy strategy, T fill) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureListSize",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<T>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attribute, expectedVertexCount, strategy, fill);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureValidAttributes(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>::get(), "EnsureValidAttributes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::MeshValidation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
