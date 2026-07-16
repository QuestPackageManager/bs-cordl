#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/WingedEdge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge___c::*)()>(&::UnityEngine::ProBuilder::WingedEdge___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66fc96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge___c._SortCommonIndexesByAdjacency_b__32_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::WingedEdge___c::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::WingedEdge___c::_SortCommonIndexesByAdjacency_b__32_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66fc970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge___c*>(),
                                                             { "<SortCommonIndexesByAdjacency>b__32_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge___c._SortCommonIndexesByAdjacency_b__32_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::WingedEdge___c::*)(::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::WingedEdge___c::_SortCommonIndexesByAdjacency_b__32_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66fc984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge___c*>(),
                                                                                           { "<SortCommonIndexesByAdjacency>b__32_2", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::WingedEdge___c::setStaticF___9(::UnityEngine::ProBuilder::WingedEdge___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::WingedEdge___c*, "<>9", ::UnityEngine::ProBuilder::WingedEdge___c*>(std::forward<::UnityEngine::ProBuilder::WingedEdge___c*>(value));
}
inline ::UnityEngine::ProBuilder::WingedEdge___c* UnityEngine::ProBuilder::WingedEdge___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::WingedEdge___c*, "<>9", ::UnityEngine::ProBuilder::WingedEdge___c*>();
}
inline void UnityEngine::ProBuilder::WingedEdge___c::setStaticF___9__32_1(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__32_1", ::UnityEngine::ProBuilder::WingedEdge___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::WingedEdge___c::getStaticF___9__32_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__32_1", ::UnityEngine::ProBuilder::WingedEdge___c*>();
}
inline void UnityEngine::ProBuilder::WingedEdge___c::setStaticF___9__32_2(::System::Converter_2<::UnityEngine::ProBuilder::Edge, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Converter_2<::UnityEngine::ProBuilder::Edge, int32_t>*, "<>9__32_2", ::UnityEngine::ProBuilder::WingedEdge___c*>(
      std::forward<::System::Converter_2<::UnityEngine::ProBuilder::Edge, int32_t>*>(value));
}
inline ::System::Converter_2<::UnityEngine::ProBuilder::Edge, int32_t>* UnityEngine::ProBuilder::WingedEdge___c::getStaticF___9__32_2() {
  return ::cordl_internals::getStaticField<::System::Converter_2<::UnityEngine::ProBuilder::Edge, int32_t>*, "<>9__32_2", ::UnityEngine::ProBuilder::WingedEdge___c*>();
}
inline void UnityEngine::ProBuilder::WingedEdge___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::WingedEdge___c::_SortCommonIndexesByAdjacency_b__32_1(::UnityEngine::ProBuilder::WingedEdge* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge___c*>(),
                                                           { "<SortCommonIndexesByAdjacency>b__32_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, y);
}
inline int32_t UnityEngine::ProBuilder::WingedEdge___c::_SortCommonIndexesByAdjacency_b__32_2(::UnityEngine::ProBuilder::Edge x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge___c*>(),
                                                                                         { "<SortCommonIndexesByAdjacency>b__32_2", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::WingedEdge___c* UnityEngine::ProBuilder::WingedEdge___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::WingedEdge___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::WingedEdge___c::WingedEdge___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0::*)()>(&::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66fc080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0._SortCommonIndexesByAdjacency_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0::_SortCommonIndexesByAdjacency_b__0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66fc98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0*>(),
                                                             { "<SortCommonIndexesByAdjacency>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0::__cordl_internal_get_common() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___common;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0::__cordl_internal_get_common() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___common;
}
constexpr void UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0::__cordl_internal_set_common(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___common = value;
}
inline void UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0::_SortCommonIndexesByAdjacency_b__0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0*>(),
                                                                                         { "<SortCommonIndexesByAdjacency>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0* UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0::WingedEdge___c__DisplayClass32_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.get_edge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::EdgeLookup (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::get_edge)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66facd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "get_edge", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.set_edge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge::*)(::UnityEngine::ProBuilder::EdgeLookup)>(&::UnityEngine::ProBuilder::WingedEdge::set_edge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66facdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "set_edge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.get_face
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::get_face)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66face4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "get_face", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.set_face
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::WingedEdge::set_face)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66facec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "set_face", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66facf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.set_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge::*)(::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::WingedEdge::set_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66facfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "set_next", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.get_previous
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::get_previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66fad04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "get_previous", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.set_previous
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge::*)(::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::WingedEdge::set_previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66fad0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "set_previous", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.get_opposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::get_opposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66fad14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "get_opposite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.set_opposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge::*)(::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::WingedEdge::set_opposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66fad1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "set_opposite", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66fad24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::WingedEdge::*)(::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::WingedEdge::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x66fad28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::WingedEdge::*)(::System::Object*)>(&::UnityEngine::ProBuilder::WingedEdge::Equals)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x66fadc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::GetHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66faed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::Count)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66faf4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::ToString)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x66faf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.MakeQuad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::WingedEdge::MakeQuad)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x66fb17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                                { "MakeQuad", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.GetAdjacentEdgeWithCommonIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (::UnityEngine::ProBuilder::WingedEdge::*)(int32_t)>(
    &::UnityEngine::ProBuilder::WingedEdge::GetAdjacentEdgeWithCommonIndex)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x66fb558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "GetAdjacentEdgeWithCommonIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.SortEdgesByAdjacency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x66fb624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "SortEdgesByAdjacency", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.SortEdgesByAdjacency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x66fb740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                                             { "SortEdgesByAdjacency", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.GetSpokes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*)>(
    &::UnityEngine::ProBuilder::WingedEdge::GetSpokes)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x66fb8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                                             { "GetSpokes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.SortCommonIndexesByAdjacency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*,
                                                                                                            ::System::Collections::Generic::HashSet_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::WingedEdge::SortCommonIndexesByAdjacency)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x66fbd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                                                                           { "SortCommonIndexesByAdjacency",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.GetWingedEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, bool)>(
    &::UnityEngine::ProBuilder::WingedEdge::GetWingedEdges)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x66fc084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                                             { "GetWingedEdges", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.GetWingedEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::WingedEdge*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, bool)>(
    &::UnityEngine::ProBuilder::WingedEdge::GetWingedEdges)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x66fc180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                                             { "GetWingedEdges",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::EdgeLookup& UnityEngine::ProBuilder::WingedEdge::__cordl_internal_get__edge_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edge_k__BackingField;
}
constexpr ::UnityEngine::ProBuilder::EdgeLookup const& UnityEngine::ProBuilder::WingedEdge::__cordl_internal_get__edge_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edge_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::WingedEdge::__cordl_internal_set__edge_k__BackingField(::UnityEngine::ProBuilder::EdgeLookup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____edge_k__BackingField = value;
}
constexpr ::UnityEngine::ProBuilder::Face*& UnityEngine::ProBuilder::WingedEdge::__cordl_internal_get__face_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____face_k__BackingField;
}
constexpr ::UnityEngine::ProBuilder::Face* const& UnityEngine::ProBuilder::WingedEdge::__cordl_internal_get__face_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____face_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::WingedEdge::__cordl_internal_set__face_k__BackingField(::UnityEngine::ProBuilder::Face* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____face_k__BackingField = value;
}
constexpr ::UnityEngine::ProBuilder::WingedEdge*& UnityEngine::ProBuilder::WingedEdge::__cordl_internal_get__next_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next_k__BackingField;
}
constexpr ::UnityEngine::ProBuilder::WingedEdge* const& UnityEngine::ProBuilder::WingedEdge::__cordl_internal_get__next_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::WingedEdge::__cordl_internal_set__next_k__BackingField(::UnityEngine::ProBuilder::WingedEdge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____next_k__BackingField = value;
}
constexpr ::UnityEngine::ProBuilder::WingedEdge*& UnityEngine::ProBuilder::WingedEdge::__cordl_internal_get__previous_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previous_k__BackingField;
}
constexpr ::UnityEngine::ProBuilder::WingedEdge* const& UnityEngine::ProBuilder::WingedEdge::__cordl_internal_get__previous_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previous_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::WingedEdge::__cordl_internal_set__previous_k__BackingField(::UnityEngine::ProBuilder::WingedEdge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previous_k__BackingField = value;
}
constexpr ::UnityEngine::ProBuilder::WingedEdge*& UnityEngine::ProBuilder::WingedEdge::__cordl_internal_get__opposite_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opposite_k__BackingField;
}
constexpr ::UnityEngine::ProBuilder::WingedEdge* const& UnityEngine::ProBuilder::WingedEdge::__cordl_internal_get__opposite_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opposite_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::WingedEdge::__cordl_internal_set__opposite_k__BackingField(::UnityEngine::ProBuilder::WingedEdge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____opposite_k__BackingField = value;
}
inline void
UnityEngine::ProBuilder::WingedEdge::setStaticF_k_OppositeEdgeDictionary(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>*, "k_OppositeEdgeDictionary",
                                    ::UnityEngine::ProBuilder::WingedEdge*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>*
UnityEngine::ProBuilder::WingedEdge::getStaticF_k_OppositeEdgeDictionary() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>*, "k_OppositeEdgeDictionary",
                                           ::UnityEngine::ProBuilder::WingedEdge*>();
}
inline ::UnityEngine::ProBuilder::EdgeLookup UnityEngine::ProBuilder::WingedEdge::get_edge() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "get_edge", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::EdgeLookup>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::WingedEdge::set_edge(::UnityEngine::ProBuilder::EdgeLookup value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "set_edge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::WingedEdge::get_face() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "get_face", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::WingedEdge::set_face(::UnityEngine::ProBuilder::Face* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "set_face", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::WingedEdge::get_next() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::WingedEdge::set_next(::UnityEngine::ProBuilder::WingedEdge* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "set_next", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::WingedEdge::get_previous() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "get_previous", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::WingedEdge::set_previous(::UnityEngine::ProBuilder::WingedEdge* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "set_previous", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::WingedEdge::get_opposite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "get_opposite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::WingedEdge::set_opposite(::UnityEngine::ProBuilder::WingedEdge* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "set_opposite", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::WingedEdge::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::WingedEdge::Equals(::UnityEngine::ProBuilder::WingedEdge* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool UnityEngine::ProBuilder::WingedEdge::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::ProBuilder::WingedEdge::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::WingedEdge::Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::ProBuilder::WingedEdge::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::WingedEdge::MakeQuad(::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                              { "MakeQuad", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::WingedEdge::GetAdjacentEdgeWithCommonIndex(int32_t common) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "GetAdjacentEdgeWithCommonIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*>(this, ___internal_method, common);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency(::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "SortEdgesByAdjacency", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>(nullptr, ___internal_method, face);
}
inline void UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                                           { "SortEdgesByAdjacency", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, edges);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*
UnityEngine::ProBuilder::WingedEdge::GetSpokes(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                                           { "GetSpokes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*>(
      nullptr, ___internal_method, wings);
}
inline ::System::Collections::Generic::List_1<int32_t>*
UnityEngine::ProBuilder::WingedEdge::SortCommonIndexesByAdjacency(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings,
                                                                  ::System::Collections::Generic::HashSet_1<int32_t>* common) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(), { "SortCommonIndexesByAdjacency",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(),
                                                                                                      ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(nullptr, ___internal_method, wings, common);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* UnityEngine::ProBuilder::WingedEdge::GetWingedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                                           bool oneWingPerFace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                                           { "GetWingedEdges", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(nullptr, ___internal_method, mesh, oneWingPerFace);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*
UnityEngine::ProBuilder::WingedEdge::GetWingedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                    bool oneWingPerFace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                                           { "GetWingedEdges",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(nullptr, ___internal_method, mesh, faces, oneWingPerFace);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::WingedEdge::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::WingedEdge*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>"
constexpr UnityEngine::ProBuilder::WingedEdge::operator ::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>"
constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>* UnityEngine::ProBuilder::WingedEdge::i___System__IEquatable_1___UnityEngine__ProBuilder__WingedEdge__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::WingedEdge::WingedEdge() {}
