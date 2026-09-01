#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Smoothing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Smoothing_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Smoothing_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Smoothing___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Smoothing___c::*)()>(&::UnityEngine::ProBuilder::Smoothing___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66f56f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Smoothing___c._GetUnusedSmoothingGroup_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Smoothing___c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::Smoothing___c::_GetUnusedSmoothingGroup_b__3_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66f56f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing___c*>(),
                                                                                           { "<GetUnusedSmoothingGroup>b__3_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Smoothing___c._ApplySmoothingGroups_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Smoothing___c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::Smoothing___c::_ApplySmoothingGroups_b__7_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66f570c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing___c*>(),
                                                                                           { "<ApplySmoothingGroups>b__7_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Smoothing___c::setStaticF___9(::UnityEngine::ProBuilder::Smoothing___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::Smoothing___c*, "<>9", ::UnityEngine::ProBuilder::Smoothing___c*>(std::forward<::UnityEngine::ProBuilder::Smoothing___c*>(value));
}
inline ::UnityEngine::ProBuilder::Smoothing___c* UnityEngine::ProBuilder::Smoothing___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::Smoothing___c*, "<>9", ::UnityEngine::ProBuilder::Smoothing___c*>();
}
inline void UnityEngine::ProBuilder::Smoothing___c::setStaticF___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__3_0", ::UnityEngine::ProBuilder::Smoothing___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::Smoothing___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__3_0", ::UnityEngine::ProBuilder::Smoothing___c*>();
}
inline void UnityEngine::ProBuilder::Smoothing___c::setStaticF___9__7_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__7_0", ::UnityEngine::ProBuilder::Smoothing___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::Smoothing___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__7_0", ::UnityEngine::ProBuilder::Smoothing___c*>();
}
inline void UnityEngine::ProBuilder::Smoothing___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::Smoothing___c::_GetUnusedSmoothingGroup_b__3_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing___c*>(),
                                                                                         { "<GetUnusedSmoothingGroup>b__3_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::Smoothing___c::_ApplySmoothingGroups_b__7_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing___c*>(), { "<ApplySmoothingGroups>b__7_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Smoothing___c* UnityEngine::ProBuilder::Smoothing___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Smoothing___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Smoothing___c::Smoothing___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::Smoothing.GetUnusedSmoothingGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::Smoothing::GetUnusedSmoothingGroup)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x66f456c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(),
                                                                                           { "GetUnusedSmoothingGroup", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Smoothing.GetNextUnusedSmoothingGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::Collections::Generic::HashSet_1<int32_t>*)>(&::UnityEngine::ProBuilder::Smoothing::GetNextUnusedSmoothingGroup)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x66f4780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(),
                                                { "GetNextUnusedSmoothingGroup", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Smoothing.IsSmooth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::ProBuilder::Smoothing::IsSmooth)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f4808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(), { "IsSmooth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Smoothing.ApplySmoothingGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, float_t)>(
    &::UnityEngine::ProBuilder::Smoothing::ApplySmoothingGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f4814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(),
                                                             { "ApplySmoothingGroups",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Smoothing.ApplySmoothingGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, float_t,
                                                                ::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::ProBuilder::Smoothing::ApplySmoothingGroups)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0x66f481c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(),
                                                                                           { "ApplySmoothingGroups",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Smoothing.FindSoftEdgesRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::ProBuilder::WingedEdge*, float_t, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)>(
        &::UnityEngine::ProBuilder::Smoothing::FindSoftEdgesRecursive)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x66f5048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(),
                                                             { "FindSoftEdgesRecursive",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Smoothing.IsSoftEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::EdgeLookup, float_t)>(
    &::UnityEngine::ProBuilder::Smoothing::IsSoftEdge)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x66f52e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(), { "IsSoftEdge",
                                                                                        {},
                                                                                        { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>(),
                                                                                          ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ProBuilder::Smoothing::GetUnusedSmoothingGroup(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(), { "GetUnusedSmoothingGroup", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mesh);
}
inline int32_t UnityEngine::ProBuilder::Smoothing::GetNextUnusedSmoothingGroup(int32_t start, ::System::Collections::Generic::HashSet_1<int32_t>* used) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(),
                                              { "GetNextUnusedSmoothingGroup", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, start, used);
}
inline bool UnityEngine::ProBuilder::Smoothing::IsSmooth(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(), { "IsSmooth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, index);
}
inline void UnityEngine::ProBuilder::Smoothing::ApplySmoothingGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                     ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, float_t angleThreshold) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(),
                                                           { "ApplySmoothingGroups",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, faces, angleThreshold);
}
inline void UnityEngine::ProBuilder::Smoothing::ApplySmoothingGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                     ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, float_t angleThreshold,
                                                                     ::ArrayW<::UnityEngine::Vector3> normals) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(), { "ApplySmoothingGroups",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                                     ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                                     ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, faces, angleThreshold, normals);
}
inline bool UnityEngine::ProBuilder::Smoothing::FindSoftEdgesRecursive(::ArrayW<::UnityEngine::Vector3> normals, ::UnityEngine::ProBuilder::WingedEdge* wing, float_t angleThreshold,
                                                                       ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* processed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(),
                                                           { "FindSoftEdgesRecursive",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, normals, wing, angleThreshold, processed);
}
inline bool UnityEngine::ProBuilder::Smoothing::IsSoftEdge(::ArrayW<::UnityEngine::Vector3> normals, ::UnityEngine::ProBuilder::EdgeLookup left, ::UnityEngine::ProBuilder::EdgeLookup right,
                                                           float_t threshold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Smoothing*>(), { "IsSoftEdge",
                                                                                      {},
                                                                                      { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>(),
                                                                                        ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, normals, left, right, threshold);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Smoothing::Smoothing() {}
