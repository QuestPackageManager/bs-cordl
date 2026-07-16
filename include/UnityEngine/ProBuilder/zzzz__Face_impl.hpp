#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Face.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_manualUV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::get_manualUV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b6d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_manualUV", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.set_manualUV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(bool)>(&::UnityEngine::ProBuilder::Face::set_manualUV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b6d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_manualUV", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_textureGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::get_textureGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b6d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_textureGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.set_textureGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(int32_t)>(&::UnityEngine::ProBuilder::Face::set_textureGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b6d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_textureGroup", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_indexesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::get_indexesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b6d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_indexesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.set_indexesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(::ArrayW<int32_t>)>(&::UnityEngine::ProBuilder::Face::set_indexesInternal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x66b6d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_indexesInternal", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_indexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* (::UnityEngine::ProBuilder::Face::*)()>(
    &::UnityEngine::ProBuilder::Face::get_indexes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66b6e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_indexes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.SetIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::Face::SetIndexes)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x66b6ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "SetIndexes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_distinctIndexesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::get_distinctIndexesInternal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66b66e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_distinctIndexesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_distinctIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* (::UnityEngine::ProBuilder::Face::*)()>(
    &::UnityEngine::ProBuilder::Face::get_distinctIndexes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66b7048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_distinctIndexes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_edgesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Edge> (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::get_edgesInternal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66b6c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_edgesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_edges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* (::UnityEngine::ProBuilder::Face::*)()>(
    &::UnityEngine::ProBuilder::Face::get_edges)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66b7484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_edges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_smoothingGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::get_smoothingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b7520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_smoothingGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.set_smoothingGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(int32_t)>(&::UnityEngine::ProBuilder::Face::set_smoothingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b7528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_smoothingGroup", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::get_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b7530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_material", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.set_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(::UnityEngine::Material*)>(&::UnityEngine::ProBuilder::Face::set_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b7538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_submeshIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::get_submeshIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b7540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_submeshIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.set_submeshIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(int32_t)>(&::UnityEngine::ProBuilder::Face::set_submeshIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b7548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_submeshIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_uv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::get_uv)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66b7550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_uv", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.set_uv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(::UnityEngine::ProBuilder::AutoUnwrapSettings)>(&::UnityEngine::ProBuilder::Face::set_uv)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66b7560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_uv", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Face::*)(int32_t)>(&::UnityEngine::ProBuilder::Face::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66b7570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b75a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::ProBuilder::Face::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66b75a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(::ArrayW<int32_t>, ::UnityEngine::Material*, ::UnityEngine::ProBuilder::AutoUnwrapSettings, int32_t,
                                                                                                 int32_t, int32_t, bool)>(&::UnityEngine::ProBuilder::Face::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x66b7644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(
    ::System::Collections::Generic::IEnumerable_1<int32_t>*, int32_t, ::UnityEngine::ProBuilder::AutoUnwrapSettings, int32_t, int32_t, int32_t, bool)>(&::UnityEngine::ProBuilder::Face::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x66b76d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { ".ctor",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                                  ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>(), ::i2c::type_of<int32_t>(),
                                                                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::Face::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66b7758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::Face::CopyFrom)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x66b775c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.InvalidateCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::InvalidateCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b6e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "InvalidateCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.CacheEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Edge> (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::CacheEdges)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x66b70e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "CacheEdges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.CacheDistinctIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::CacheDistinctIndexes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66b6fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "CacheDistinctIndexes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Face::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::ProBuilder::Face::Contains)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66b788c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(),
                                                                                           { "Contains", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.IsQuad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::IsQuad)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x66b7920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "IsQuad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.ToQuad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::ToQuad)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x66b7968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "ToQuad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::ToString)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x66b7d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.ShiftIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)(int32_t)>(&::UnityEngine::ProBuilder::Face::ShiftIndexes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66b7f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "ShiftIndexes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.SmallestIndexValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::SmallestIndexValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x66b7f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "SmallestIndexValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.ShiftIndexesToZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::ShiftIndexesToZero)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66b7fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "ShiftIndexesToZero", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.Reverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Face::*)()>(&::UnityEngine::ProBuilder::Face::Reverse)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x66b8008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "Reverse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.GetIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::Face::GetIndices)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x66b805c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "GetIndices",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                                  ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.GetDistinctIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::Face::GetDistinctIndices)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x66b8408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "GetDistinctIndices",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                                  ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Face.TryGetNextEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Face::*)(::UnityEngine::ProBuilder::Edge, int32_t, ::by_ref<::UnityEngine::ProBuilder::Edge>,
                                                                                                 ::by_ref<int32_t>)>(&::UnityEngine::ProBuilder::Face::TryGetNextEdge)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x66b87d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(),
                                                                                           { "TryGetNextEdge",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::Edge>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_Indexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Indexes;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_Indexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Indexes;
}
constexpr void UnityEngine::ProBuilder::Face::__cordl_internal_set_m_Indexes(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Indexes = value;
}
constexpr int32_t& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_SmoothingGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SmoothingGroup;
}
constexpr int32_t const& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_SmoothingGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SmoothingGroup;
}
constexpr void UnityEngine::ProBuilder::Face::__cordl_internal_set_m_SmoothingGroup(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SmoothingGroup = value;
}
constexpr ::UnityEngine::ProBuilder::AutoUnwrapSettings& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_Uv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Uv;
}
constexpr ::UnityEngine::ProBuilder::AutoUnwrapSettings const& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_Uv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Uv;
}
constexpr void UnityEngine::ProBuilder::Face::__cordl_internal_set_m_Uv(::UnityEngine::ProBuilder::AutoUnwrapSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Uv = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::ProBuilder::Face::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material = value;
}
constexpr int32_t& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_SubmeshIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmeshIndex;
}
constexpr int32_t const& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_SubmeshIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmeshIndex;
}
constexpr void UnityEngine::ProBuilder::Face::__cordl_internal_set_m_SubmeshIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubmeshIndex = value;
}
constexpr bool& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_ManualUV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManualUV;
}
constexpr bool const& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_ManualUV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManualUV;
}
constexpr void UnityEngine::ProBuilder::Face::__cordl_internal_set_m_ManualUV(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ManualUV = value;
}
constexpr int32_t& UnityEngine::ProBuilder::Face::__cordl_internal_get_elementGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementGroup;
}
constexpr int32_t const& UnityEngine::ProBuilder::Face::__cordl_internal_get_elementGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementGroup;
}
constexpr void UnityEngine::ProBuilder::Face::__cordl_internal_set_elementGroup(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementGroup = value;
}
constexpr int32_t& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_TextureGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureGroup;
}
constexpr int32_t const& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_TextureGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureGroup;
}
constexpr void UnityEngine::ProBuilder::Face::__cordl_internal_set_m_TextureGroup(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextureGroup = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_DistinctIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DistinctIndexes;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_DistinctIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DistinctIndexes;
}
constexpr void UnityEngine::ProBuilder::Face::__cordl_internal_set_m_DistinctIndexes(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DistinctIndexes = value;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge>& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_Edges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Edges;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge> const& UnityEngine::ProBuilder::Face::__cordl_internal_get_m_Edges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Edges;
}
constexpr void UnityEngine::ProBuilder::Face::__cordl_internal_set_m_Edges(::ArrayW<::UnityEngine::ProBuilder::Edge> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Edges = value;
}
inline bool UnityEngine::ProBuilder::Face::get_manualUV() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_manualUV", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::set_manualUV(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_manualUV", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ProBuilder::Face::get_textureGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_textureGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::set_textureGroup(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_textureGroup", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::Face::get_indexesInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_indexesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::set_indexesInternal(::ArrayW<int32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_indexesInternal", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* UnityEngine::ProBuilder::Face::get_indexes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_indexes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::SetIndexes(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "SetIndexes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices);
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::Face::get_distinctIndexesInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_distinctIndexesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* UnityEngine::ProBuilder::Face::get_distinctIndexes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_distinctIndexes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>*>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::Face::get_edgesInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_edgesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Edge>>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::Face::get_edges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_edges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>*>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::Face::get_smoothingGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_smoothingGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::set_smoothingGroup(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_smoothingGroup", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::ProBuilder::Face::get_material() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_material", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::set_material(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ProBuilder::Face::get_submeshIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_submeshIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::set_submeshIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_submeshIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::AutoUnwrapSettings UnityEngine::ProBuilder::Face::get_uv() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_uv", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::AutoUnwrapSettings>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::set_uv(::UnityEngine::ProBuilder::AutoUnwrapSettings value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "set_uv", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ProBuilder::Face::get_Item(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i);
}
inline void UnityEngine::ProBuilder::Face::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices);
}
inline void UnityEngine::ProBuilder::Face::_ctor(::ArrayW<int32_t> triangles, ::UnityEngine::Material* m, ::UnityEngine::ProBuilder::AutoUnwrapSettings u, int32_t smoothing, int32_t texture,
                                                 int32_t element, bool manualUVs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, m, u, smoothing, texture, element, manualUVs);
}
inline void UnityEngine::ProBuilder::Face::_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* triangles, int32_t submeshIndex, ::UnityEngine::ProBuilder::AutoUnwrapSettings u,
                                                 int32_t smoothing, int32_t texture, int32_t element, bool manualUVs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { ".ctor",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submeshIndex, u, smoothing, texture, element, manualUVs);
}
inline void UnityEngine::ProBuilder::Face::_ctor(::UnityEngine::ProBuilder::Face* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::ProBuilder::Face::CopyFrom(::UnityEngine::ProBuilder::Face* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::ProBuilder::Face::InvalidateCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "InvalidateCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::Face::CacheEdges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "CacheEdges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Edge>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::Face::CacheDistinctIndexes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "CacheDistinctIndexes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::Face::Contains(int32_t a, int32_t b, int32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "Contains", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b, c);
}
inline bool UnityEngine::ProBuilder::Face::IsQuad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "IsQuad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::Face::ToQuad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "ToQuad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::StringW UnityEngine::ProBuilder::Face::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::ShiftIndexes(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "ShiftIndexes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline int32_t UnityEngine::ProBuilder::Face::SmallestIndexValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "SmallestIndexValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::ShiftIndexesToZero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "ShiftIndexesToZero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::Reverse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "Reverse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Face::GetIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                      ::System::Collections::Generic::List_1<int32_t>* indices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "GetIndices",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                                ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, faces, indices);
}
inline void UnityEngine::ProBuilder::Face::GetDistinctIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                              ::System::Collections::Generic::List_1<int32_t>* indices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "GetDistinctIndices",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                                ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, faces, indices);
}
inline bool UnityEngine::ProBuilder::Face::TryGetNextEdge(::UnityEngine::ProBuilder::Edge source, int32_t index, ::by_ref<::UnityEngine::ProBuilder::Edge> nextEdge, ::by_ref<int32_t> nextIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Face*>(), { "TryGetNextEdge",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::Edge>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, index, nextEdge, nextIndex);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::Face::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Face*>());
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::Face::New_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Face*>(indices));
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::Face::New_ctor(::ArrayW<int32_t> triangles, ::UnityEngine::Material* m, ::UnityEngine::ProBuilder::AutoUnwrapSettings u,
                                                                                int32_t smoothing, int32_t texture, int32_t element, bool manualUVs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Face*>(triangles, m, u, smoothing, texture, element, manualUVs));
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::Face::New_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* triangles, int32_t submeshIndex,
                                                                                ::UnityEngine::ProBuilder::AutoUnwrapSettings u, int32_t smoothing, int32_t texture, int32_t element, bool manualUVs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Face*>(triangles, submeshIndex, u, smoothing, texture, element, manualUVs));
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::Face::New_ctor(::UnityEngine::ProBuilder::Face* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Face*>(other));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Face::Face() {}
