#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAccessor.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFComponentType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAccessor_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAccessor_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFType_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRGLTFType", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComponentType", ty:
// "::GlobalNamespace::OVRGLTFComponentType", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComponentTypeStride", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "BufferViewIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ByteOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Count", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Min", ty: "::OVRSimpleJSON::JSONNode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Max", ty:
// "::OVRSimpleJSON::JSONNode*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor::OVRGLTFAccessor_GLTFAccessor(::GlobalNamespace::OVRGLTFType Type, ::GlobalNamespace::OVRGLTFComponentType ComponentType,
                                                                                        int32_t ComponentTypeStride, int32_t BufferViewIndex, int32_t ByteOffset, int32_t Count,
                                                                                        ::OVRSimpleJSON::JSONNode* Min, ::OVRSimpleJSON::JSONNode* Max) noexcept {
  this->Type = Type;
  this->ComponentType = ComponentType;
  this->ComponentTypeStride = ComponentTypeStride;
  this->BufferViewIndex = BufferViewIndex;
  this->ByteOffset = ByteOffset;
  this->Count = Count;
  this->Min = Min;
  this->Max = Max;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor::OVRGLTFAccessor_GLTFAccessor() {}
// Ctor Parameters [CppParam { name: "BufferIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ByteOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ByteLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ByteStride", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView::OVRGLTFAccessor_GLTFBufferView(int32_t BufferIndex, int32_t ByteOffset, int32_t ByteLength, int32_t ByteStride) noexcept {
  this->BufferIndex = BufferIndex;
  this->ByteOffset = ByteOffset;
  this->ByteLength = ByteLength;
  this->ByteStride = ByteStride;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView::OVRGLTFAccessor_GLTFBufferView() {}
// Ctor Parameters [CppParam { name: "ByteLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer::OVRGLTFAccessor_GLTFBuffer(int32_t ByteLength) noexcept {
  this->ByteLength = ByteLength;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer::OVRGLTFAccessor_GLTFBuffer() {}
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.TryCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::OVRSimpleJSON::JSONNode*, ::OVRSimpleJSON::JSONNode*, ::OVRSimpleJSON::JSONNode*, ::System::IO::Stream*,
                                                                                           ::ByRef<::GlobalNamespace::OVRGLTFAccessor*>)>(&::GlobalNamespace::OVRGLTFAccessor::TryCreate)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c72a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "TryCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRGLTFAccessor*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(
    ::OVRSimpleJSON::JSONNode*, ::OVRSimpleJSON::JSONNode*, ::OVRSimpleJSON::JSONNode*, ::System::IO::BinaryReader*, int32_t, int32_t)>(&::GlobalNamespace::OVRGLTFAccessor::_ctor)> {
  constexpr static std::size_t size = 0x108c;
  constexpr static std::size_t addrs = 0x5c72bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ToOVRType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRGLTFType (*)(::StringW)>(&::GlobalNamespace::OVRGLTFAccessor::ToOVRType)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5c73d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ToOVRType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(int32_t, bool)>(&::GlobalNamespace::OVRGLTFAccessor::Seek)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5c73ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "Seek", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.SeekStride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(int32_t)>(&::GlobalNamespace::OVRGLTFAccessor::SeekStride)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c740a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "SeekStride", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::GlobalNamespace::OVRGLTFAccessor::*)()>(
    &::GlobalNamespace::OVRGLTFAccessor::ReadFloat)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5c74188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadFloat",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::GlobalNamespace::OVRGLTFAccessor::*)()>(
    &::GlobalNamespace::OVRGLTFAccessor::ReadInt)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c744a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadInt",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> (::GlobalNamespace::OVRGLTFAccessor::*)()>(
    &::GlobalNamespace::OVRGLTFAccessor::ReadVector2)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5c746e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadVector2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (::GlobalNamespace::OVRGLTFAccessor::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRGLTFAccessor::ReadVector3)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5c74898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadVector3", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadVector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> (::GlobalNamespace::OVRGLTFAccessor::*)(::UnityEngine::Vector4)>(&::GlobalNamespace::OVRGLTFAccessor::ReadVector4)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5c74b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadVector4", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadAsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IO::BinaryReader*, ::GlobalNamespace::OVRGLTFComponentType)>(
    &::GlobalNamespace::OVRGLTFAccessor::ReadAsInt)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5c74548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsInt", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadAsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IO::BinaryReader*, ::GlobalNamespace::OVRGLTFComponentType)>(
    &::GlobalNamespace::OVRGLTFAccessor::ReadAsFloat)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5c7430c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsFloat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> (::GlobalNamespace::OVRGLTFAccessor::*)()>(
    &::GlobalNamespace::OVRGLTFAccessor::ReadColor)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5c74d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(::ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>>)>(&::GlobalNamespace::OVRGLTFAccessor::ReadWeights)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5c752a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadWeights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadJoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(::ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>>)>(&::GlobalNamespace::OVRGLTFAccessor::ReadJoints)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5c75588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadJoints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadQuaterion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> (::GlobalNamespace::OVRGLTFAccessor::*)(
    ::UnityEngine::Vector4)>(&::GlobalNamespace::OVRGLTFAccessor::ReadQuaterion)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5c75740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadQuaterion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadMatrix4x4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (::GlobalNamespace::OVRGLTFAccessor::*)(
    ::UnityEngine::Vector3)>(&::GlobalNamespace::OVRGLTFAccessor::ReadMatrix4x4)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x5c75a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadMatrix4x4", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.GetStrideForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRGLTFComponentType)>(
    &::GlobalNamespace::OVRGLTFAccessor::GetStrideForType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c73c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "GetStrideForType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.GetMaxValueForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRGLTFComponentType)>(
    &::GlobalNamespace::OVRGLTFAccessor::GetMaxValueForType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c751a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "GetMaxValueForType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::OVRGLTFAccessor::*)(int32_t)>(
    &::GlobalNamespace::OVRGLTFAccessor::ReadBuffer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c75f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadBuffer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)()>(&::GlobalNamespace::OVRGLTFAccessor::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c76030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.GetDataCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRGLTFAccessor::*)()>(&::GlobalNamespace::OVRGLTFAccessor::GetDataCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c76050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "GetDataCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor>*& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__accessors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accessors;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor>* const& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__accessors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accessors;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__cordl_internal_set__accessors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____accessors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView>*& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__bufferViews() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferViews;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView>* const& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__bufferViews() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferViews;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__cordl_internal_set__bufferViews(::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bufferViews)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer>*& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__buffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer>* const& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__buffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffers;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__cordl_internal_set__buffers(::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__binaryChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____binaryChunk;
}
constexpr ::System::IO::Stream* const& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__binaryChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____binaryChunk;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__cordl_internal_set__binaryChunk(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____binaryChunk)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__binaryChunkLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____binaryChunkLength;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__binaryChunkLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____binaryChunkLength;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__cordl_internal_set__binaryChunkLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____binaryChunkLength = value;
}
constexpr int32_t& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__binaryChunkStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____binaryChunkStart;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__binaryChunkStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____binaryChunkStart;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__cordl_internal_set__binaryChunkStart(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____binaryChunkStart = value;
}
constexpr ::System::IO::BinaryReader*& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr ::System::IO::BinaryReader* const& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__cordl_internal_set__reader(::System::IO::BinaryReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__activeGltfAccessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeGltfAccessor;
}
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor const& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__activeGltfAccessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeGltfAccessor;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__cordl_internal_set__activeGltfAccessor(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeGltfAccessor = value;
}
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__activeBufferView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeBufferView;
}
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView const& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__activeBufferView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeBufferView;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__cordl_internal_set__activeBufferView(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeBufferView = value;
}
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__activeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeBuffer;
}
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer const& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__activeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeBuffer;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__cordl_internal_set__activeBuffer(::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeBuffer = value;
}
constexpr int32_t& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__activeBufferOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeBufferOffset;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__activeBufferOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeBufferOffset;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__cordl_internal_set__activeBufferOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeBufferOffset = value;
}
constexpr bool& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__requireStrideSeek() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requireStrideSeek;
}
constexpr bool const& GlobalNamespace::OVRGLTFAccessor::__cordl_internal_get__requireStrideSeek() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requireStrideSeek;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__cordl_internal_set__requireStrideSeek(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requireStrideSeek = value;
}
inline bool GlobalNamespace::OVRGLTFAccessor::TryCreate(::OVRSimpleJSON::JSONNode* accessorsRoot, ::OVRSimpleJSON::JSONNode* bufferViewsRoot, ::OVRSimpleJSON::JSONNode* buffersRoot,
                                                        ::System::IO::Stream* binaryChunk, ::ByRef<::GlobalNamespace::OVRGLTFAccessor*> dataAccessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "TryCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRGLTFAccessor*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, accessorsRoot, bufferViewsRoot, buffersRoot, binaryChunk, dataAccessor);
}
inline void GlobalNamespace::OVRGLTFAccessor::_ctor(::OVRSimpleJSON::JSONNode* accessorsRoot, ::OVRSimpleJSON::JSONNode* bufferViewsRoot, ::OVRSimpleJSON::JSONNode* buffersRoot,
                                                    ::System::IO::BinaryReader* binaryChunkReader, int32_t binaryChinkStart, int32_t binaryChunkLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accessorsRoot, bufferViewsRoot, buffersRoot, binaryChunkReader, binaryChinkStart, binaryChunkLength);
}
inline ::GlobalNamespace::OVRGLTFType GlobalNamespace::OVRGLTFAccessor::ToOVRType(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ToOVRType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRGLTFType, false>(nullptr, ___internal_method, type);
}
inline void GlobalNamespace::OVRGLTFAccessor::Seek(int32_t accessorIndex, bool onlyBufferView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "Seek", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accessorIndex, onlyBufferView);
}
inline void GlobalNamespace::OVRGLTFAccessor::SeekStride(int32_t strideIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "SeekStride",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, strideIndex);
}
inline ::ArrayW<float_t, ::Array<float_t>*> GlobalNamespace::OVRGLTFAccessor::ReadFloat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadFloat",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> GlobalNamespace::OVRGLTFAccessor::ReadInt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadInt",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> GlobalNamespace::OVRGLTFAccessor::ReadVector2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadVector2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GlobalNamespace::OVRGLTFAccessor::ReadVector3(::UnityEngine::Vector3 conversionScale) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadVector3", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(this, ___internal_method, conversionScale);
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GlobalNamespace::OVRGLTFAccessor::ReadVector4(::UnityEngine::Vector4 conversionScale) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadVector4", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, false>(this, ___internal_method, conversionScale);
}
inline int32_t GlobalNamespace::OVRGLTFAccessor::ReadAsInt(::System::IO::BinaryReader* reader, ::GlobalNamespace::OVRGLTFComponentType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsInt", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, reader, type);
}
inline float_t GlobalNamespace::OVRGLTFAccessor::ReadAsFloat(::System::IO::BinaryReader* reader, ::GlobalNamespace::OVRGLTFComponentType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsFloat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, reader, type);
}
inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GlobalNamespace::OVRGLTFAccessor::ReadColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGLTFAccessor::ReadWeights(::ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>> resultsBoneWeights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadWeights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultsBoneWeights);
}
inline void GlobalNamespace::OVRGLTFAccessor::ReadJoints(::ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>> resultsBoneWeights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadJoints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultsBoneWeights);
}
inline ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> GlobalNamespace::OVRGLTFAccessor::ReadQuaterion(::UnityEngine::Vector4 gltfToUnitySpaceRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadQuaterion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>, false>(this, ___internal_method, gltfToUnitySpaceRotation);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GlobalNamespace::OVRGLTFAccessor::ReadMatrix4x4(::UnityEngine::Vector3 conversionScale) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadMatrix4x4", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(this, ___internal_method, conversionScale);
}
inline int32_t GlobalNamespace::OVRGLTFAccessor::GetStrideForType(::GlobalNamespace::OVRGLTFComponentType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "GetStrideForType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, type);
}
inline float_t GlobalNamespace::OVRGLTFAccessor::GetMaxValueForType(::GlobalNamespace::OVRGLTFComponentType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "GetMaxValueForType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, type);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::OVRGLTFAccessor::ReadBuffer(int32_t bufferViewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, bufferViewIndex);
}
inline void GlobalNamespace::OVRGLTFAccessor::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRGLTFAccessor::GetDataCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "GetDataCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRGLTFAccessor* GlobalNamespace::OVRGLTFAccessor::New_ctor(::OVRSimpleJSON::JSONNode* accessorsRoot, ::OVRSimpleJSON::JSONNode* bufferViewsRoot,
                                                                                      ::OVRSimpleJSON::JSONNode* buffersRoot, ::System::IO::BinaryReader* binaryChunkReader, int32_t binaryChinkStart,
                                                                                      int32_t binaryChunkLength) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRGLTFAccessor*>(accessorsRoot, bufferViewsRoot, buffersRoot, binaryChunkReader, binaryChinkStart, binaryChunkLength));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRGLTFAccessor::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRGLTFAccessor::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAccessor::OVRGLTFAccessor() {}
