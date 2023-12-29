#pragma once
#include "GlobalNamespace/zzzz__OVRBinaryChunk_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMaterialData_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFLoader_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFLoader_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFScene_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "GlobalNamespace/zzzz__OVRMaterialData_def.hpp"
#include "GlobalNamespace/zzzz__OVRChunkType_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::*)()>(
    &::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ce2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0._ProcessMesh_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::*)()>(
    &::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::_ProcessMesh_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25ce2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0*>::get(), "<ProcessMesh>b__0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRGLTFLoader*& GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRGLTFLoader*> const& GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::__set___4__this(::GlobalNamespace::OVRGLTFLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRMaterialData& GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::__get_matData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matData;
}
constexpr ::GlobalNamespace::OVRMaterialData const& GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::__get_matData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matData;
}
constexpr void GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::__set_matData(::GlobalNamespace::OVRMaterialData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___matData = value;
}
inline ::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0* GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0*>());
}
inline void GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::_ProcessMesh_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0*>::get(),
                                                                             "<ProcessMesh>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0::__OVRGLTFLoader____c__DisplayClass27_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::StringW)>(&::GlobalNamespace::OVRGLTFLoader::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25c9000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::OVRGLTFLoader::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25c9038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.LoadGLB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRGLTFScene (::GlobalNamespace::OVRGLTFLoader::*)(bool, bool)>(
    &::GlobalNamespace::OVRGLTFLoader::LoadGLB)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x25c90c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "LoadGLB", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.SetModelShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::UnityEngine::Shader*)>(
    &::GlobalNamespace::OVRGLTFLoader::SetModelShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c9e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "SetModelShader", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.SetModelAlphaBlendShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::UnityEngine::Shader*)>(
    &::GlobalNamespace::OVRGLTFLoader::SetModelAlphaBlendShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c9e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "SetModelAlphaBlendShader", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.SetTextureQualityFiltering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::GlobalNamespace::OVRTextureQualityFiltering)>(
    &::GlobalNamespace::OVRGLTFLoader::SetTextureQualityFiltering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c9e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "SetTextureQualityFiltering", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTextureQualityFiltering>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.SetMipMapBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(float_t)>(&::GlobalNamespace::OVRGLTFLoader::SetMipMapBias)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25c9e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "SetMipMapBias", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.DetectTextureQuality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTextureQualityFiltering (*)(ByRef<::UnityEngine::Texture2D*>)>(
    &::GlobalNamespace::OVRGLTFLoader::DetectTextureQuality)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x25c9e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "DetectTextureQuality", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ApplyTextureQuality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRTextureQualityFiltering, ByRef<::UnityEngine::Texture2D*>)>(
    &::GlobalNamespace::OVRGLTFLoader::ApplyTextureQuality)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x25c9ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ApplyTextureQuality", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTextureQualityFiltering>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ValidateGLB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRGLTFLoader::*)(::System::IO::Stream*)>(&::GlobalNamespace::OVRGLTFLoader::ValidateGLB)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x25c9614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ValidateGLB", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ReadChunk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::OVRGLTFLoader::*)(::System::IO::Stream*, ::GlobalNamespace::OVRChunkType)>(&::GlobalNamespace::OVRGLTFLoader::ReadChunk)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25c981c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ReadChunk", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRChunkType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ValidateChunk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRGLTFLoader::*)(::System::IO::Stream*, ::GlobalNamespace::OVRChunkType, ByRef<uint32_t>)>(
    &::GlobalNamespace::OVRGLTFLoader::ValidateChunk)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x25c98c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ValidateChunk", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRChunkType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.LoadGLTF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRGLTFLoader::*)(bool, bool)>(&::GlobalNamespace::OVRGLTFLoader::LoadGLTF)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x25c9a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "LoadGLTF", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::OVRSimpleJSON::JSONNode*, int32_t, bool)>(
    &::GlobalNamespace::OVRGLTFLoader::ProcessNode)> {
  constexpr static std::size_t size = 0x8ac;
  constexpr static std::size_t addrs = 0x25ca068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ProcessNode", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMeshData (::GlobalNamespace::OVRGLTFLoader::*)(::OVRSimpleJSON::JSONNode*, bool)>(
    &::GlobalNamespace::OVRGLTFLoader::ProcessMesh)> {
  constexpr static std::size_t size = 0x143c;
  constexpr static std::size_t addrs = 0x25cadb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ProcessMesh", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.FlipTraingleIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>)>(&::GlobalNamespace::OVRGLTFLoader::FlipTraingleIndices)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25ccc34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "FlipTraingleIndices", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessSkin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::OVRSimpleJSON::JSONNode*, ::UnityEngine::SkinnedMeshRenderer*)>(
    &::GlobalNamespace::OVRGLTFLoader::ProcessSkin)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x25cc1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ProcessSkin", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SkinnedMeshRenderer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMaterialData (::GlobalNamespace::OVRGLTFLoader::*)(int32_t)>(
    &::GlobalNamespace::OVRGLTFLoader::ProcessMaterial)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x25cc600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ProcessMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTextureData (::GlobalNamespace::OVRGLTFLoader::*)(int32_t)>(
    &::GlobalNamespace::OVRGLTFLoader::ProcessTexture)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x25cc864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ProcessTexture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.TranscodeTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(ByRef<::GlobalNamespace::OVRTextureData>)>(
    &::GlobalNamespace::OVRGLTFLoader::TranscodeTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25cce30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "TranscodeTexture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRTextureData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.CreateUnityMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (::GlobalNamespace::OVRGLTFLoader::*)(::GlobalNamespace::OVRMaterialData, bool)>(
    &::GlobalNamespace::OVRGLTFLoader::CreateUnityMaterial)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x25ccca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "CreateUnityMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMaterialData>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.GetInputNodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRGLTFInputNode (::GlobalNamespace::OVRGLTFLoader::*)(::StringW)>(
    &::GlobalNamespace::OVRGLTFLoader::GetInputNodeType)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x25ccec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "GetInputNodeType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)()>(&::GlobalNamespace::OVRGLTFLoader::ProcessAnimations)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x25ca914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ProcessAnimations",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::OVRSimpleJSON::JSONNode*& GlobalNamespace::OVRGLTFLoader::__get_m_jsonData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_jsonData;
}
constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& GlobalNamespace::OVRGLTFLoader::__get_m_jsonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_jsonData;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__set_m_jsonData(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_jsonData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& GlobalNamespace::OVRGLTFLoader::__get_m_glbStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_glbStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& GlobalNamespace::OVRGLTFLoader::__get_m_glbStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_glbStream;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__set_m_glbStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_glbStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRBinaryChunk& GlobalNamespace::OVRGLTFLoader::__get_m_binaryChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_binaryChunk;
}
constexpr ::GlobalNamespace::OVRBinaryChunk const& GlobalNamespace::OVRGLTFLoader::__get_m_binaryChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_binaryChunk;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__set_m_binaryChunk(::GlobalNamespace::OVRBinaryChunk value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_binaryChunk = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& GlobalNamespace::OVRGLTFLoader::__get_m_Nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nodes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> const& GlobalNamespace::OVRGLTFLoader::__get_m_Nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nodes;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__set_m_Nodes(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Nodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*& GlobalNamespace::OVRGLTFLoader::__get_m_AnimationNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimationNodes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*> const&
GlobalNamespace::OVRGLTFLoader::__get_m_AnimationNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimationNodes;
}
constexpr void
GlobalNamespace::OVRGLTFLoader::__set_m_AnimationNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AnimationNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Shader*& GlobalNamespace::OVRGLTFLoader::__get_m_Shader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& GlobalNamespace::OVRGLTFLoader::__get_m_Shader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__set_m_Shader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Shader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Shader*& GlobalNamespace::OVRGLTFLoader::__get_m_AlphaBlendShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlphaBlendShader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& GlobalNamespace::OVRGLTFLoader::__get_m_AlphaBlendShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlphaBlendShader;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__set_m_AlphaBlendShader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AlphaBlendShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering& GlobalNamespace::OVRGLTFLoader::__get_m_TextureQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureQuality;
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& GlobalNamespace::OVRGLTFLoader::__get_m_TextureQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureQuality;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__set_m_TextureQuality(::GlobalNamespace::OVRTextureQualityFiltering value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextureQuality = value;
}
constexpr float_t& GlobalNamespace::OVRGLTFLoader::__get_m_TextureMipmapBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureMipmapBias;
}
constexpr float_t const& GlobalNamespace::OVRGLTFLoader::__get_m_TextureMipmapBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureMipmapBias;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__set_m_TextureMipmapBias(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextureMipmapBias = value;
}
inline void GlobalNamespace::OVRGLTFLoader::setStaticF_GLTFToUnitySpace(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "GLTFToUnitySpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRGLTFLoader::getStaticF_GLTFToUnitySpace() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "GLTFToUnitySpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get>();
}
inline void GlobalNamespace::OVRGLTFLoader::setStaticF_GLTFToUnityTangent(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "GLTFToUnityTangent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRGLTFLoader::getStaticF_GLTFToUnityTangent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "GLTFToUnityTangent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get>();
}
inline void GlobalNamespace::OVRGLTFLoader::setStaticF_GLTFToUnitySpace_Rotation(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "GLTFToUnitySpace_Rotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get>(
      std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 GlobalNamespace::OVRGLTFLoader::getStaticF_GLTFToUnitySpace_Rotation() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "GLTFToUnitySpace_Rotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get>();
}
inline void GlobalNamespace::OVRGLTFLoader::setStaticF_InputNodeNameMap(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>*, "InputNodeNameMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* GlobalNamespace::OVRGLTFLoader::getStaticF_InputNodeNameMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>*, "InputNodeNameMap",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get>();
}
inline ::GlobalNamespace::OVRGLTFLoader* GlobalNamespace::OVRGLTFLoader::New_ctor(::StringW fileName) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRGLTFLoader*>(fileName));
}
inline void GlobalNamespace::OVRGLTFLoader::_ctor(::StringW fileName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileName);
}
inline ::GlobalNamespace::OVRGLTFLoader* GlobalNamespace::OVRGLTFLoader::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRGLTFLoader*>(data));
}
inline void GlobalNamespace::OVRGLTFLoader::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
/// @param loadMips: bool (default: true)
inline ::GlobalNamespace::OVRGLTFScene GlobalNamespace::OVRGLTFLoader::LoadGLB(bool supportAnimation, bool loadMips) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "LoadGLB", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRGLTFScene, false>(this, ___internal_method, supportAnimation, loadMips);
}
inline void GlobalNamespace::OVRGLTFLoader::SetModelShader(::UnityEngine::Shader* shader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "SetModelShader", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shader);
}
inline void GlobalNamespace::OVRGLTFLoader::SetModelAlphaBlendShader(::UnityEngine::Shader* shader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "SetModelAlphaBlendShader",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shader);
}
inline void GlobalNamespace::OVRGLTFLoader::SetTextureQualityFiltering(::GlobalNamespace::OVRTextureQualityFiltering loadedTexturesQuality) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "SetTextureQualityFiltering", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTextureQualityFiltering>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadedTexturesQuality);
}
inline void GlobalNamespace::OVRGLTFLoader::SetMipMapBias(float_t loadedTexturesMipmapBiasing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "SetMipMapBias", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadedTexturesMipmapBiasing);
}
inline ::GlobalNamespace::OVRTextureQualityFiltering GlobalNamespace::OVRGLTFLoader::DetectTextureQuality(ByRef<::UnityEngine::Texture2D*> srcTexture) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "DetectTextureQuality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTextureQualityFiltering, false>(nullptr, ___internal_method, srcTexture);
}
inline void GlobalNamespace::OVRGLTFLoader::ApplyTextureQuality(::GlobalNamespace::OVRTextureQualityFiltering qualityLevel, ByRef<::UnityEngine::Texture2D*> destTexture) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ApplyTextureQuality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTextureQualityFiltering>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, qualityLevel, destTexture);
}
inline bool GlobalNamespace::OVRGLTFLoader::ValidateGLB(::System::IO::Stream* glbStream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ValidateGLB", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, glbStream);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::OVRGLTFLoader::ReadChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ReadChunk", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRChunkType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, glbStream, type);
}
inline bool GlobalNamespace::OVRGLTFLoader::ValidateChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type, ByRef<uint32_t> chunkLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ValidateChunk", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRChunkType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, glbStream, type, chunkLength);
}
inline int32_t GlobalNamespace::OVRGLTFLoader::LoadGLTF(bool supportAnimation, bool loadMips) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "LoadGLTF", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, supportAnimation, loadMips);
}
inline void GlobalNamespace::OVRGLTFLoader::ProcessNode(::OVRSimpleJSON::JSONNode* node, int32_t nodeId, bool loadMips) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ProcessNode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, nodeId, loadMips);
}
inline ::GlobalNamespace::OVRMeshData GlobalNamespace::OVRGLTFLoader::ProcessMesh(::OVRSimpleJSON::JSONNode* meshNode, bool loadMips) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ProcessMesh", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMeshData, false>(this, ___internal_method, meshNode, loadMips);
}
inline void GlobalNamespace::OVRGLTFLoader::FlipTraingleIndices(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> indices) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "FlipTraingleIndices", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, indices);
}
inline void GlobalNamespace::OVRGLTFLoader::ProcessSkin(::OVRSimpleJSON::JSONNode* skinNode, ::UnityEngine::SkinnedMeshRenderer* renderer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ProcessSkin", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SkinnedMeshRenderer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, skinNode, renderer);
}
inline ::GlobalNamespace::OVRMaterialData GlobalNamespace::OVRGLTFLoader::ProcessMaterial(int32_t matId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ProcessMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMaterialData, false>(this, ___internal_method, matId);
}
inline ::GlobalNamespace::OVRTextureData GlobalNamespace::OVRGLTFLoader::ProcessTexture(int32_t textureId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ProcessTexture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTextureData, false>(this, ___internal_method, textureId);
}
inline void GlobalNamespace::OVRGLTFLoader::TranscodeTexture(ByRef<::GlobalNamespace::OVRTextureData> textureData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "TranscodeTexture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRTextureData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textureData);
}
inline ::UnityEngine::Material* GlobalNamespace::OVRGLTFLoader::CreateUnityMaterial(::GlobalNamespace::OVRMaterialData matData, bool loadMips) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "CreateUnityMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMaterialData>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(this, ___internal_method, matData, loadMips);
}
inline ::GlobalNamespace::OVRGLTFInputNode GlobalNamespace::OVRGLTFLoader::GetInputNodeType(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "GetInputNodeType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRGLTFInputNode, false>(this, ___internal_method, name);
}
inline void GlobalNamespace::OVRGLTFLoader::ProcessAnimations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader*>::get(), "ProcessAnimations",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFLoader::OVRGLTFLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
