#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\MeshOperations\UVEditing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__UVEditing_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__UVEditing_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::*)()>(&::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6740b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c._GetUVs_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_GetUVs_b__2_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6740b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(), { "<GetUVs>b__2_0", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c._SewUVs_b__4_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::*)(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_SewUVs_b__4_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6740b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(),
                                                             { "<SewUVs>b__4_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c._ProjectFacesAuto_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (
    ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_ProjectFacesAuto_b__8_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6740bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(),
                                                                                           { "<ProjectFacesAuto>b__8_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c._ProjectFacesAuto_b__8_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (
    ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_ProjectFacesAuto_b__8_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6740bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(),
                                                                                           { "<ProjectFacesAuto>b__8_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c._ProjectFacesBox_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (
    ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_ProjectFacesBox_b__9_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6740bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(),
                                                                                           { "<ProjectFacesBox>b__9_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c._ProjectFacesBox_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (
    ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_ProjectFacesBox_b__11_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6740c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(),
                                                                                           { "<ProjectFacesBox>b__11_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::UVEditing___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c* UnityEngine::ProBuilder::MeshOperations::UVEditing___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing___c::setStaticF___9__2_0(::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*, "<>9__2_0", ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* UnityEngine::ProBuilder::MeshOperations::UVEditing___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*, "<>9__2_0", ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing___c::setStaticF___9__4_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, int32_t>*, "<>9__4_1",
                                    ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, int32_t>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, int32_t>* UnityEngine::ProBuilder::MeshOperations::UVEditing___c::getStaticF___9__4_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, int32_t>*, "<>9__4_1",
                                           ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>();
}
inline void
UnityEngine::ProBuilder::MeshOperations::UVEditing___c::setStaticF___9__8_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__8_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* UnityEngine::ProBuilder::MeshOperations::UVEditing___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__8_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>();
}
inline void
UnityEngine::ProBuilder::MeshOperations::UVEditing___c::setStaticF___9__8_1(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__8_1",
                                    ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* UnityEngine::ProBuilder::MeshOperations::UVEditing___c::getStaticF___9__8_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__8_1",
                                           ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>();
}
inline void
UnityEngine::ProBuilder::MeshOperations::UVEditing___c::setStaticF___9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__9_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* UnityEngine::ProBuilder::MeshOperations::UVEditing___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__9_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>();
}
inline void
UnityEngine::ProBuilder::MeshOperations::UVEditing___c::setStaticF___9__11_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__11_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* UnityEngine::ProBuilder::MeshOperations::UVEditing___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__11_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_GetUVs_b__2_0(::UnityEngine::Vector4 x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(), { "<GetUVs>b__2_0", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_SewUVs_b__4_1(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(),
                                                           { "<SewUVs>b__4_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, y);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_ProjectFacesAuto_b__8_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(),
                                                                                         { "<ProjectFacesAuto>b__8_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_ProjectFacesAuto_b__8_1(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(),
                                                                                         { "<ProjectFacesAuto>b__8_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_ProjectFacesBox_b__9_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(),
                                                                                         { "<ProjectFacesBox>b__9_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::UVEditing___c::_ProjectFacesBox_b__11_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>(),
                                                                                         { "<ProjectFacesBox>b__11_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c* UnityEngine::ProBuilder::MeshOperations::UVEditing___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c::UVEditing___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x673d7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0._AutoStitch_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::_AutoStitch_b__0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6740c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0*>(),
                                                                                           { "<AutoStitch>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Face*& UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::__cordl_internal_get_f1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f1;
}
constexpr ::UnityEngine::ProBuilder::Face* const& UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::__cordl_internal_get_f1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f1;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::__cordl_internal_set_f1(::UnityEngine::ProBuilder::Face* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___f1 = value;
}
constexpr ::UnityEngine::ProBuilder::Face*& UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::__cordl_internal_get_f2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f2;
}
constexpr ::UnityEngine::ProBuilder::Face* const& UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::__cordl_internal_get_f2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f2;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::__cordl_internal_set_f2(::UnityEngine::ProBuilder::Face* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___f2 = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::_AutoStitch_b__0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0*>(),
                                                                                         { "<AutoStitch>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0* UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass0_0::UVEditing___c__DisplayClass0_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x673f160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0._SewUVs_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0::*)(
    ::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0::_SewUVs_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6740c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0*>(),
                                                             { "<SewUVs>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr int32_t const& UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0::__cordl_internal_set_b(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0::_SewUVs_b__0(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0*>(),
                                                           { "<SewUVs>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0* UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c__DisplayClass4_0::UVEditing___c__DisplayClass4_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.AutoStitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing::AutoStitch)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x673d570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                             { "AutoStitch",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(),
                                                                 ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.AlignEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge,
                                                                ::UnityEngine::ProBuilder::Edge, int32_t)>(&::UnityEngine::ProBuilder::MeshOperations::UVEditing::AlignEdges)> {
  constexpr static std::size_t size = 0xa04;
  constexpr static std::size_t addrs = 0x673d7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                             { "AlignEdges",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(),
                                                                 ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.GetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing::GetUVs)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x673e1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                             { "GetUVs", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.ApplyUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::Vector2>, int32_t, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing::ApplyUVs)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x673e7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                             { "ApplyUVs",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.SewUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t>, float_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing::SewUVs)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x673eb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                { "SewUVs", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.CollapseUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::UVEditing::CollapseUVs)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x673f164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                             { "CollapseUVs", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.SplitUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing::SplitUVs)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x673e45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                            { "SplitUVs", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.SplitUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing::SplitUVs)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x673f230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
            { "SplitUVs", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.ProjectFacesAuto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*>, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesAuto)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x673f634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
            { "ProjectFacesAuto", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.ProjectFacesBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*>, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesBox)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x673f9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
            { "ProjectFacesBox", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.FindMinimalUV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::ArrayW<::UnityEngine::Vector2>, ::ArrayW<int32_t>, float_t, float_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing::FindMinimalUV)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x67400c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                         { "FindMinimalUV", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.ProjectFacesBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*>, ::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesBox)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x6740188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                             { "ProjectFacesBox",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.ProjectFacesSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t>, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesSphere)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x67408a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                            { "ProjectFacesSphere", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::UVEditing.FitUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::ProBuilder::MeshOperations::UVEditing::FitUVs)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6740a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(), { "FitUVs", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::ProBuilder::MeshOperations::UVEditing::AutoStitch(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* f1, ::UnityEngine::ProBuilder::Face* f2,
                                                                           int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                           { "AutoStitch",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(),
                                                               ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh, f1, f2, channel);
}
inline bool UnityEngine::ProBuilder::MeshOperations::UVEditing::AlignEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* faceToMove,
                                                                           ::UnityEngine::ProBuilder::Edge edgeToAlignTo, ::UnityEngine::ProBuilder::Edge edgeToBeAligned, int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                           { "AlignEdges",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(),
                                                               ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh, faceToMove, edgeToAlignTo, edgeToBeAligned, channel);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::ProBuilder::MeshOperations::UVEditing::GetUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                           { "GetUVs", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(nullptr, ___internal_method, mesh, channel);
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing::ApplyUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::Vector2> uvs, int32_t channel, bool applyToMesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                           { "ApplyUVs",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, uvs, channel, applyToMesh);
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing::SewUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t> indexes, float_t delta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                              { "SewUVs", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, indexes, delta);
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing::CollapseUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t> indexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                           { "CollapseUVs", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, indexes);
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing::SplitUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                          { "SplitUVs", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, indexes);
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing::SplitUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                         ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
          { "SplitUVs", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, faces);
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesAuto(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*> faces, int32_t channel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
          { "ProjectFacesAuto", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, faces, channel);
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesBox(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*> faces, int32_t channel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
          { "ProjectFacesBox", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, faces, channel);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::MeshOperations::UVEditing::FindMinimalUV(::ArrayW<::UnityEngine::Vector2> uvs, ::ArrayW<int32_t> indices, float_t xMin, float_t yMin) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                          { "FindMinimalUV", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, uvs, indices, xMin, yMin);
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesBox(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*> faces,
                                                                                ::UnityEngine::Vector2 lowerLeftAnchor, int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                                                           { "ProjectFacesBox",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>(),
                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, faces, lowerLeftAnchor, channel);
}
inline void UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesSphere(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::ArrayW<int32_t> indexes, int32_t channel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(),
                          { "ProjectFacesSphere", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pb, indexes, channel);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::ProBuilder::MeshOperations::UVEditing::FitUVs(::ArrayW<::UnityEngine::Vector2> uvs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::UVEditing*>(), { "FitUVs", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(nullptr, ___internal_method, uvs);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::UVEditing::UVEditing() {}
