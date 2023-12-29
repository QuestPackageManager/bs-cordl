#pragma once
#include "GlobalNamespace/zzzz__OVRGLTFComponentType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAccessor_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFType_def.hpp"
#include "GlobalNamespace/zzzz__OVRBinaryChunk_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFComponentType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(::OVRSimpleJSON::JSONNode*, ::OVRSimpleJSON::JSONNode*, bool)>(
    &::GlobalNamespace::OVRGLTFAccessor::_ctor)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x25c517c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.GetDataCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRGLTFAccessor::*)()>(&::GlobalNamespace::OVRGLTFAccessor::GetDataCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c5620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "GetDataCount",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ToOVRType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRGLTFType (*)(::StringW)>(&::GlobalNamespace::OVRGLTFAccessor::ToOVRType)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x25c54bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ToOVRType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadAsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(
    ::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>, int32_t)>(&::GlobalNamespace::OVRGLTFAccessor::ReadAsInt)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x25c5628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsInt", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadAsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(
    ::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<float_t, ::Array<float_t>*>>, int32_t)>(&::GlobalNamespace::OVRGLTFAccessor::ReadAsFloat)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x25c5a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsFloat", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadAsVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(
    ::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>, int32_t)>(&::GlobalNamespace::OVRGLTFAccessor::ReadAsVector2)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x25c5ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsVector2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadAsVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(
    ::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>, int32_t, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::OVRGLTFAccessor::ReadAsVector3)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x25c5f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsVector3", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadAsVector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(
    ::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>, int32_t, ::UnityEngine::Vector4)>(
    &::GlobalNamespace::OVRGLTFAccessor::ReadAsVector4)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x25c62c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsVector4", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadAsColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(
    ::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>, int32_t)>(&::GlobalNamespace::OVRGLTFAccessor::ReadAsColor)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x25c66b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsColor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadAsMatrix4x4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(
    ::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>, int32_t, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::OVRGLTFAccessor::ReadAsMatrix4x4)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x25c6b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsMatrix4x4", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadAsKtxTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRBinaryChunk)>(
    &::GlobalNamespace::OVRGLTFAccessor::ReadAsKtxTexture)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x25c6ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsKtxTexture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadAsBoneWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAccessor::*)(
    ::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>, int32_t)>(&::GlobalNamespace::OVRGLTFAccessor::ReadAsBoneWeights)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x25c6fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsBoneWeights", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.GetStrideForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRGLTFComponentType)>(
    &::GlobalNamespace::OVRGLTFAccessor::GetStrideForType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c583c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "GetStrideForType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.GetMaxValueForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRGLTFComponentType)>(
    &::GlobalNamespace::OVRGLTFAccessor::GetMaxValueForType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c6b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "GetMaxValueForType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadElementAsUint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::OVRGLTFAccessor::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::GlobalNamespace::OVRGLTFComponentType)>(&::GlobalNamespace::OVRGLTFAccessor::ReadElementAsUint)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x25c5864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadElementAsUint", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAccessor.ReadElementAsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRGLTFAccessor::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::GlobalNamespace::OVRGLTFAccessor::ReadElementAsFloat)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25c5c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadElementAsFloat", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRGLTFAccessor::__get_byteOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteOffset;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFAccessor::__get_byteOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteOffset;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__set_byteOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteOffset = value;
}
constexpr int32_t& GlobalNamespace::OVRGLTFAccessor::__get_byteLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteLength;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFAccessor::__get_byteLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteLength;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__set_byteLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteLength = value;
}
constexpr int32_t& GlobalNamespace::OVRGLTFAccessor::__get_byteStride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteStride;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFAccessor::__get_byteStride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteStride;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__set_byteStride(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteStride = value;
}
constexpr int32_t& GlobalNamespace::OVRGLTFAccessor::__get_bufferId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferId;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFAccessor::__get_bufferId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferId;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__set_bufferId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferId = value;
}
constexpr int32_t& GlobalNamespace::OVRGLTFAccessor::__get_bufferLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferLength;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFAccessor::__get_bufferLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferLength;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__set_bufferLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferLength = value;
}
constexpr int32_t& GlobalNamespace::OVRGLTFAccessor::__get_additionalOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalOffset;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFAccessor::__get_additionalOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalOffset;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__set_additionalOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___additionalOffset = value;
}
constexpr ::GlobalNamespace::OVRGLTFType& GlobalNamespace::OVRGLTFAccessor::__get_dataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataType;
}
constexpr ::GlobalNamespace::OVRGLTFType const& GlobalNamespace::OVRGLTFAccessor::__get_dataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataType;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__set_dataType(::GlobalNamespace::OVRGLTFType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataType = value;
}
constexpr ::GlobalNamespace::OVRGLTFComponentType& GlobalNamespace::OVRGLTFAccessor::__get_componentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___componentType;
}
constexpr ::GlobalNamespace::OVRGLTFComponentType const& GlobalNamespace::OVRGLTFAccessor::__get_componentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___componentType;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__set_componentType(::GlobalNamespace::OVRGLTFComponentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___componentType = value;
}
constexpr int32_t& GlobalNamespace::OVRGLTFAccessor::__get_dataCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataCount;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFAccessor::__get_dataCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataCount;
}
constexpr void GlobalNamespace::OVRGLTFAccessor::__set_dataCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataCount = value;
}
/// @param bufferViewOnly: bool (default: false)
inline ::GlobalNamespace::OVRGLTFAccessor* GlobalNamespace::OVRGLTFAccessor::New_ctor(::OVRSimpleJSON::JSONNode* node, ::OVRSimpleJSON::JSONNode* root, bool bufferViewOnly) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRGLTFAccessor*>(node, root, bufferViewOnly));
}
/// @param bufferViewOnly: bool (default: false)
inline void GlobalNamespace::OVRGLTFAccessor::_ctor(::OVRSimpleJSON::JSONNode* node, ::OVRSimpleJSON::JSONNode* root, bool bufferViewOnly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, root, bufferViewOnly);
}
inline int32_t GlobalNamespace::OVRGLTFAccessor::GetDataCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "GetDataCount",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRGLTFType GlobalNamespace::OVRGLTFAccessor::ToOVRType(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ToOVRType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRGLTFType, false>(nullptr, ___internal_method, type);
}
inline void GlobalNamespace::OVRGLTFAccessor::ReadAsInt(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> data, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsInt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunk, data, offset);
}
inline void GlobalNamespace::OVRGLTFAccessor::ReadAsFloat(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<float_t, ::Array<float_t>*>> data, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsFloat", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunk, data, offset);
}
inline void GlobalNamespace::OVRGLTFAccessor::ReadAsVector2(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsVector2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunk, data, offset);
}
inline void GlobalNamespace::OVRGLTFAccessor::ReadAsVector3(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> data, int32_t offset,
                                                            ::UnityEngine::Vector3 conversionScale) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsVector3", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunk, data, offset, conversionScale);
}
inline void GlobalNamespace::OVRGLTFAccessor::ReadAsVector4(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> data, int32_t offset,
                                                            ::UnityEngine::Vector4 conversionScale) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsVector4", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunk, data, offset, conversionScale);
}
inline void GlobalNamespace::OVRGLTFAccessor::ReadAsColor(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsColor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunk, data, offset);
}
inline void GlobalNamespace::OVRGLTFAccessor::ReadAsMatrix4x4(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> data,
                                                              int32_t offset, ::UnityEngine::Vector3 conversionScale) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsMatrix4x4", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunk, data, offset, conversionScale);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::OVRGLTFAccessor::ReadAsKtxTexture(::GlobalNamespace::OVRBinaryChunk chunk) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsKtxTexture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, chunk);
}
inline void GlobalNamespace::OVRGLTFAccessor::ReadAsBoneWeights(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> data,
                                                                int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadAsBoneWeights", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunk, data, offset);
}
inline int32_t GlobalNamespace::OVRGLTFAccessor::GetStrideForType(::GlobalNamespace::OVRGLTFComponentType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "GetStrideForType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, type);
}
inline float_t GlobalNamespace::OVRGLTFAccessor::GetMaxValueForType(::GlobalNamespace::OVRGLTFComponentType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "GetMaxValueForType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, type);
}
inline uint32_t GlobalNamespace::OVRGLTFAccessor::ReadElementAsUint(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t index, ::GlobalNamespace::OVRGLTFComponentType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadElementAsUint", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, data, index, type);
}
inline float_t GlobalNamespace::OVRGLTFAccessor::ReadElementAsFloat(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAccessor*>::get(), "ReadElementAsFloat", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, data, index);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAccessor::OVRGLTFAccessor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
