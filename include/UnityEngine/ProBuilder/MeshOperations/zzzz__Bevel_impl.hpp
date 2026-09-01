#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\MeshOperations\Bevel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__SharedVertex_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__Bevel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__Bevel_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::Bevel___c::*)()>(&::UnityEngine::ProBuilder::MeshOperations::Bevel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x671b180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c._BevelEdges_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::MeshOperations::Bevel___c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel___c::_BevelEdges_b__0_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x671b184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(),
                                                                                           { "<BevelEdges>b__0_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c._BevelEdges_b__0_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::Bevel___c::*)(
    ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel___c::_BevelEdges_b__0_6)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x671b198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(),
                            { "<BevelEdges>b__0_6",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c._BevelEdges_b__0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::MeshOperations::Bevel___c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel___c::_BevelEdges_b__0_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x671b1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(),
                                                                                           { "<BevelEdges>b__0_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c._BevelEdges_b__0_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::MeshOperations::Bevel___c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel___c::_BevelEdges_b__0_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x671b20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(),
                                                                                           { "<BevelEdges>b__0_2", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c._BevelEdges_b__0_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::MeshOperations::Bevel___c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel___c::_BevelEdges_b__0_3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x671b220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(),
                                                                                           { "<BevelEdges>b__0_3", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::Bevel___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::Bevel___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::Bevel___c* UnityEngine::ProBuilder::MeshOperations::Bevel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::Bevel___c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::Bevel___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::Bevel___c::setStaticF___9__0_6(
    ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>*,
                                    "<>9__0_6", ::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>*
UnityEngine::ProBuilder::MeshOperations::Bevel___c::getStaticF___9__0_6() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>*, "<>9__0_6",
      ::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::Bevel___c::setStaticF___9__0_1(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_1",
                                    ::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::Bevel___c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_1",
                                           ::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::Bevel___c::setStaticF___9__0_2(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_2",
                                    ::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::Bevel___c::getStaticF___9__0_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_2",
                                           ::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::Bevel___c::setStaticF___9__0_3(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_3",
                                    ::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::Bevel___c::getStaticF___9__0_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_3",
                                           ::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::Bevel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::Bevel___c::_BevelEdges_b__0_0(::UnityEngine::ProBuilder::FaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(),
                                                                                         { "<BevelEdges>b__0_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::Bevel___c::_BevelEdges_b__0_6(
    ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*> x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(),
                          { "<BevelEdges>b__0_6",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::Bevel___c::_BevelEdges_b__0_1(::UnityEngine::ProBuilder::FaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(),
                                                                                         { "<BevelEdges>b__0_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::Bevel___c::_BevelEdges_b__0_2(::UnityEngine::ProBuilder::FaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(),
                                                                                         { "<BevelEdges>b__0_2", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::Bevel___c::_BevelEdges_b__0_3(::UnityEngine::ProBuilder::FaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>(),
                                                                                         { "<BevelEdges>b__0_3", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::Bevel___c* UnityEngine::ProBuilder::MeshOperations::Bevel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::Bevel___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::Bevel___c::Bevel___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x671a1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0._BevelEdges_b__7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::*)(int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::_BevelEdges_b__7)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x671b234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0*>(), { "<BevelEdges>b__7", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0._BevelEdges_b__8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::*)(int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::_BevelEdges_b__8)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x671b270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0*>(), { "<BevelEdges>b__8", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>*&
UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::__cordl_internal_get_ignore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignore;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>* const&
UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::__cordl_internal_get_ignore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignore;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::__cordl_internal_set_ignore(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignore = value;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>& UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::__cordl_internal_get_sharedIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedIndexes;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> const& UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::__cordl_internal_get_sharedIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedIndexes;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::__cordl_internal_set_sharedIndexes(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedIndexes = value;
}
constexpr ::System::Func_2<int32_t, int32_t>*& UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::__cordl_internal_get___9__7() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__7;
}
constexpr ::System::Func_2<int32_t, int32_t>* const& UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::__cordl_internal_get___9__7() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__7;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::__cordl_internal_set___9__7(::System::Func_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__7 = value;
}
constexpr ::System::Func_2<int32_t, int32_t>*& UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::__cordl_internal_get___9__8() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__8;
}
constexpr ::System::Func_2<int32_t, int32_t>* const& UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::__cordl_internal_get___9__8() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__8;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::__cordl_internal_set___9__8(::System::Func_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__8 = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::_BevelEdges_b__7(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0*>(), { "<BevelEdges>b__7", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::_BevelEdges_b__8(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0*>(), { "<BevelEdges>b__8", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0* UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0::Bevel___c__DisplayClass0_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x671a200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1._BevelEdges_b__4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1::_BevelEdges_b__4)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x671b2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1*>(),
                                                                                           { "<BevelEdges>b__4", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::EdgeLookup& UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1::__cordl_internal_get_lup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lup;
}
constexpr ::UnityEngine::ProBuilder::EdgeLookup const& UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1::__cordl_internal_get_lup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lup;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1::__cordl_internal_set_lup(::UnityEngine::ProBuilder::EdgeLookup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lup = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1::_BevelEdges_b__4(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1*>(),
                                                                                         { "<BevelEdges>b__4", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1* UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1::Bevel___c__DisplayClass0_1() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x671aeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2._BevelEdges_b__5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::_BevelEdges_b__5)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x671b2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2*>(),
                                                                                           { "<BevelEdges>b__5", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr int32_t const& UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::__cordl_internal_set_c(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0*& UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0* const&
UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::__cordl_internal_set_CS$__8__locals1(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::_BevelEdges_b__5(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2*>(),
                                                                                         { "<BevelEdges>b__5", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2* UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2::Bevel___c__DisplayClass0_2() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel.BevelEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*,
                                                                                  float_t)>(&::UnityEngine::ProBuilder::MeshOperations::Bevel::BevelEdges)> {
  constexpr static std::size_t size = 0x28b4;
  constexpr static std::size_t addrs = 0x6717948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel*>(),
                                                             { "BevelEdges",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel.GetBridgeFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::
        FaceRebuildData*>* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*,
                               ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<
                                                                                         ::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel::GetBridgeFaces)> {
  constexpr static std::size_t size = 0x8a0;
  constexpr static std::size_t addrs = 0x671a618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel*>(),
            { "GetBridgeFaces",
              {},
              { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(), ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<
                                                                                         ::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel.SlideEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::UnityEngine::ProBuilder::WingedEdge*, float_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel::SlideEdge)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x671a204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel*>(),
                                                                                           { "SlideEdge",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel.GetLeadingEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (*)(::UnityEngine::ProBuilder::WingedEdge*, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel::GetLeadingEdge)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x671afc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel*>(),
                                                             { "GetLeadingEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::Bevel::setStaticF_k_BridgeIndexesTri(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "k_BridgeIndexesTri", ::UnityEngine::ProBuilder::MeshOperations::Bevel*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::MeshOperations::Bevel::getStaticF_k_BridgeIndexesTri() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "k_BridgeIndexesTri", ::UnityEngine::ProBuilder::MeshOperations::Bevel*>();
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::Bevel::BevelEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                           float_t amount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel*>(),
                                                           { "BevelEdges",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>(nullptr, ___internal_method, mesh, edges, amount);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* UnityEngine::ProBuilder::MeshOperations::Bevel::GetBridgeFaces(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right,
    ::System::Collections::Generic::Dictionary_2<
        int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>*>*
        holes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel*>(),
          { "GetBridgeFaces",
            {},
            { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(), ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(),
              ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(),
              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<
                                                                                       ::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*>(nullptr, ___internal_method, vertices, left, right, holes);
}
inline void UnityEngine::ProBuilder::MeshOperations::Bevel::SlideEdge(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::WingedEdge* we,
                                                                      float_t amount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel*>(),
                                                                                         { "SlideEdge",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertices, we, amount);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::Bevel::GetLeadingEdge(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t common) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Bevel*>(),
                                                           { "GetLeadingEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(nullptr, ___internal_method, wing, common);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::Bevel::Bevel() {}
