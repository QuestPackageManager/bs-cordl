#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Poly2Tri\AdvancingFront.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__AdvancingFront_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66ad368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(),
                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront.AddNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::AddNode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66ad374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(),
                                                                                           { "AddNode", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront.RemoveNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::RemoveNode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66ad378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(),
                                                                                           { "RemoveNode", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x66ad37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront.FindSearchNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(double_t)>(
    &::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::FindSearchNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66ad470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(), { "FindSearchNode", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront.LocateNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocateNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66ad478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(),
                                                                                           { "LocateNode", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront.LocateNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(double_t)>(
    &::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocateNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66ad48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(), { "LocateNode", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront.LocatePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocatePoint)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x66ad4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(),
                                                                                           { "LocatePoint", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::__cordl_internal_get_Head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Head;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::__cordl_internal_get_Head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Head;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::__cordl_internal_set_Head(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Head = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::__cordl_internal_get_Tail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tail;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::__cordl_internal_get_Tail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tail;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::__cordl_internal_set_Tail(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Tail = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::__cordl_internal_get_Search() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Search;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::__cordl_internal_get_Search() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Search;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::__cordl_internal_set_Search(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Search = value;
}
inline void UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::_ctor(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* head, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* tail) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(),
                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, head, tail);
}
inline void UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::AddNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(),
                                                                                         { "AddNode", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::RemoveNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(),
                                                                                         { "RemoveNode", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::StringW UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::FindSearchNode(double_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(), { "FindSearchNode", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocateNode(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(),
                                                                                         { "LocateNode", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(this, ___internal_method, point);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocateNode(double_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(), { "LocateNode", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocatePoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(),
                                                                                         { "LocatePoint", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(this, ___internal_method, point);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::New_ctor(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* head,
                                                                                                                        ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* tail) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*>(head, tail));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::AdvancingFront() {}
