#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/DeleteElements.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__DeleteElements_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__DeleteElements_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x476e4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c._DeleteFaces_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (
    ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c::_DeleteFaces_b__3_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x476e4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c*>::get(), "<DeleteFaces>b__3_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::DeleteElements___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c*>::get>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c* UnityEngine::ProBuilder::MeshOperations::DeleteElements___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c*>::get>();
}
inline void
UnityEngine::ProBuilder::MeshOperations::DeleteElements___c::setStaticF___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* UnityEngine::ProBuilder::MeshOperations::DeleteElements___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::DeleteElements___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::DeleteElements___c::_DeleteFaces_b__3_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c*>::get(), "<DeleteFaces>b__3_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c* UnityEngine::ProBuilder::MeshOperations::DeleteElements___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c::DeleteElements___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x476dd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0._DeleteVertices_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::*)(
    ::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::_DeleteVertices_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x476e4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0*>::get(), "<DeleteVertices>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0._DeleteVertices_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> (
    ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::*)(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>)>(
    &::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::_DeleteVertices_b__1)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x476e558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0*>::get(), "<DeleteVertices>b__1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0._DeleteVertices_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::*)(
    ::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::_DeleteVertices_b__2)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x476e600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0*>::get(), "<DeleteVertices>b__2",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0._DeleteVertices_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> (
    ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::*)(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>)>(
    &::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::_DeleteVertices_b__3)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x476e66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0*>::get(), "<DeleteVertices>b__3",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::__cordl_internal_get_sorted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sorted;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::__cordl_internal_get_sorted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sorted;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::__cordl_internal_set_sorted(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sorted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::__cordl_internal_set_offset(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___offset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::_DeleteVertices_b__0(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0*>::get(), "<DeleteVertices>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>
UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::_DeleteVertices_b__1(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0*>::get(), "<DeleteVertices>b__1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, false>(this, ___internal_method, y);
}
inline bool UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::_DeleteVertices_b__2(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0*>::get(), "<DeleteVertices>b__2",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>
UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::_DeleteVertices_b__3(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0*>::get(), "<DeleteVertices>b__3",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, false>(this, ___internal_method, y);
}
inline ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0* UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass0_0::DeleteElements___c__DisplayClass0_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x476dd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0._DeleteFaces_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0::*)(
    ::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0::_DeleteFaces_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x476e714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0*>::get(), "<DeleteFaces>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0::__cordl_internal_get_mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0::__cordl_internal_get_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0::__cordl_internal_set_mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0::_DeleteFaces_b__0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0*>::get(), "<DeleteFaces>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0* UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c__DisplayClass2_0::DeleteElements___c__DisplayClass2_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements.DeleteVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteVertices)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x475f2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements*>::get(), "DeleteVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements.DeleteFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteFace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x475d48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements*>::get(), "DeleteFace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements.DeleteFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteFaces)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x47651d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements*>::get(), "DeleteFaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements.DeleteFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteFaces)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x476dd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements*>::get(), "DeleteFaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements.RemoveDegenerateTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::MeshOperations::DeleteElements::RemoveDegenerateTriangles)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x476e328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements*>::get(), "RemoveDegenerateTriangles",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements.RemoveUnusedVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::MeshOperations::DeleteElements::RemoveUnusedVertices)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x476e3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements*>::get(), "RemoveUnusedVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                    ::System::Collections::Generic::IEnumerable_1<int32_t>* distinctIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements*>::get(), "DeleteVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, distinctIndexes);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements*>::get(), "DeleteFace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, mesh, face);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*>
UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                     ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements*>::get(), "DeleteFaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, mesh, faces);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                 ::System::Collections::Generic::IList_1<int32_t>* faceIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements*>::get(), "DeleteFaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, mesh, faceIndexes);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::ProBuilder::MeshOperations::DeleteElements::RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements*>::get(), "RemoveDegenerateTriangles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, mesh);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::ProBuilder::MeshOperations::DeleteElements::RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::DeleteElements*>::get(), "RemoveUnusedVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, mesh);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteElements() {}
