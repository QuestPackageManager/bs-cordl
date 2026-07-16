#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryRecorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryRecorder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryPool_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Entry_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::EntryPool*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6cd892c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::EntryPool*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.DrawMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(
    ::UnityEngine::UIElements::UIR::Entry*, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<uint16_t>, ::UnityEngine::Texture*, bool)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::DrawMesh)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6cd89a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                { "DrawMesh",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.DrawRasterText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(
    ::UnityEngine::UIElements::UIR::Entry*, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<uint16_t>, ::UnityEngine::Texture*, bool)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::DrawRasterText)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6cd8c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                { "DrawRasterText",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.DrawSdfText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(
    ::UnityEngine::UIElements::UIR::Entry*, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<uint16_t>, ::UnityEngine::Texture*, float_t,
    float_t)>(&::UnityEngine::UIElements::UIR::EntryRecorder::DrawSdfText)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6cd8d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                            { "DrawSdfText",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.DrawGradients
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(
    ::UnityEngine::UIElements::UIR::Entry*, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<uint16_t>,
    ::UnityEngine::UIElements::VectorImage*)>(&::UnityEngine::UIElements::UIR::EntryRecorder::DrawGradients)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6cd8da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                { "DrawGradients",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.DrawImmediate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*, ::System::Action*, bool)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::DrawImmediate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6cd8e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                { "DrawImmediate", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.DrawChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::DrawChildren)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd8ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "DrawChildren", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.BeginStencilMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::BeginStencilMask)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd8f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "BeginStencilMask", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.EndStencilMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::EndStencilMask)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd9030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "EndStencilMask", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.PopStencilMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::PopStencilMask)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd90e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PopStencilMask", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.PushClippingRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::PushClippingRect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd9190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PushClippingRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.PopClippingRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::PopClippingRect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd9240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PopClippingRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.PushScissors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::PushScissors)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd92f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PushScissors", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.PopScissors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::PopScissors)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd93a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PopScissors", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.PushGroupMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::PushGroupMatrix)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd9450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PushGroupMatrix", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.PopGroupMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::PopGroupMatrix)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd9500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PopGroupMatrix", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.PushRenderTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::PushRenderTexture)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd95b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                                                           { "PushRenderTexture", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.BlitAndPopRenderTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::BlitAndPopRenderTexture)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd9660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                                                           { "BlitAndPopRenderTexture", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.PushDefaultMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*, ::UnityEngine::Material*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::PushDefaultMaterial)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6cd9710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                             { "PushDefaultMaterial", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.PopDefaultMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::PopDefaultMaterial)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd97c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                                                           { "PopDefaultMaterial", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.CutRenderChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::CutRenderChain)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd9878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "CutRenderChain", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.InsertPlaceholder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::Entry* (::UnityEngine::UIElements::UIR::EntryRecorder::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::InsertPlaceholder)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6cd9928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                                                           { "InsertPlaceholder", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.AppendMeshEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::Entry*, ::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::AppendMeshEntry)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6cd8a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                { "AppendMeshEntry", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryRecorder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::Entry*, ::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryRecorder::Append)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6cd99dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                { "Append", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::EntryPool*& UnityEngine::UIElements::UIR::EntryRecorder::__cordl_internal_get_m_EntryPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryPool;
}
constexpr ::UnityEngine::UIElements::UIR::EntryPool* const& UnityEngine::UIElements::UIR::EntryRecorder::__cordl_internal_get_m_EntryPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryPool;
}
constexpr void UnityEngine::UIElements::UIR::EntryRecorder::__cordl_internal_set_m_EntryPool(::UnityEngine::UIElements::UIR::EntryPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntryPool = value;
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::_ctor(::UnityEngine::UIElements::UIR::EntryPool* entryPool) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::EntryPool*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entryPool);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::DrawMesh(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                  ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture, bool skipAtlas) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                              { "DrawMesh",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry, vertices, indices, texture, skipAtlas);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::DrawRasterText(::UnityEngine::UIElements::UIR::Entry* parentEntry,
                                                                        ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                        ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture, bool multiChannel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                              { "DrawRasterText",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry, vertices, indices, texture, multiChannel);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::DrawSdfText(::UnityEngine::UIElements::UIR::Entry* parentEntry,
                                                                     ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                     ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture, float_t scale, float_t sharpness) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                          { "DrawSdfText",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                              ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry, vertices, indices, texture, scale, sharpness);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::DrawGradients(::UnityEngine::UIElements::UIR::Entry* parentEntry,
                                                                       ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                       ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::UIElements::VectorImage* gradientsOwner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                              { "DrawGradients",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry, vertices, indices, gradientsOwner);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::DrawImmediate(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::System::Action* callback, bool cullingEnabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                              { "DrawImmediate", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry, callback, cullingEnabled);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::DrawChildren(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "DrawChildren", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::BeginStencilMask(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "BeginStencilMask", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::EndStencilMask(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "EndStencilMask", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::PopStencilMask(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PopStencilMask", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::PushClippingRect(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PushClippingRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::PopClippingRect(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PopClippingRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::PushScissors(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PushScissors", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::PopScissors(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PopScissors", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::PushGroupMatrix(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PushGroupMatrix", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::PopGroupMatrix(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PopGroupMatrix", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::PushRenderTexture(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PushRenderTexture", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::BlitAndPopRenderTexture(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                                                         { "BlitAndPopRenderTexture", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::PushDefaultMaterial(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                           { "PushDefaultMaterial", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry, material);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::PopDefaultMaterial(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "PopDefaultMaterial", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::CutRenderChain(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "CutRenderChain", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry);
}
inline ::UnityEngine::UIElements::UIR::Entry* UnityEngine::UIElements::UIR::EntryRecorder::InsertPlaceholder(::UnityEngine::UIElements::UIR::Entry* parentEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), { "InsertPlaceholder", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Entry*>(this, ___internal_method, parentEntry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::AppendMeshEntry(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::UnityEngine::UIElements::UIR::Entry* entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                              { "AppendMeshEntry", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parentEntry, entry);
}
inline void UnityEngine::UIElements::UIR::EntryRecorder::Append(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::UnityEngine::UIElements::UIR::Entry* entry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(),
                                                           { "Append", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parentEntry, entry);
}
inline ::UnityEngine::UIElements::UIR::EntryRecorder* UnityEngine::UIElements::UIR::EntryRecorder::New_ctor(::UnityEngine::UIElements::UIR::EntryPool* entryPool) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::EntryRecorder*>(entryPool));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::EntryRecorder::EntryRecorder() {}
