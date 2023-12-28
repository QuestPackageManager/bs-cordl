#pragma once
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeUsage_def.hpp"
//  Writing Method size for method: ::UnityEngine::Renderer.get_bounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_bounds)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ca2a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_bounds",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_bounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Bounds)>(&::UnityEngine::Renderer::set_bounds)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca2b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_bounds", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_localBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Bounds)>(&::UnityEngine::Renderer::set_localBounds)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca2bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_localBounds", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::GetMaterial)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca2c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetMaterial",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetSharedMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::GetSharedMaterial)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca2c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetSharedMaterial",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Material*)>(&::UnityEngine::Renderer::SetMaterial)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca2ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "SetMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetMaterialArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> (::UnityEngine::Renderer::*)()>(
    &::UnityEngine::Renderer::GetMaterialArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca2d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetMaterialArray",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.CopySharedMaterialArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>)>(
    &::UnityEngine::Renderer::CopySharedMaterialArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca2d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "CopySharedMaterialArray", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetMaterialArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>)>(
    &::UnityEngine::Renderer::SetMaterialArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca2d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "SetMaterialArray", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.Internal_SetPropertyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(
    &::UnityEngine::Renderer::Internal_SetPropertyBlock)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca2dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "Internal_SetPropertyBlock", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.Internal_GetPropertyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(
    &::UnityEngine::Renderer::Internal_GetPropertyBlock)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca2e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "Internal_GetPropertyBlock", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.Internal_SetPropertyBlockMaterialIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*, int32_t)>(
    &::UnityEngine::Renderer::Internal_SetPropertyBlockMaterialIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ca2e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "Internal_SetPropertyBlockMaterialIndex", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.Internal_GetPropertyBlockMaterialIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*, int32_t)>(
    &::UnityEngine::Renderer::Internal_GetPropertyBlockMaterialIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ca2eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "Internal_GetPropertyBlockMaterialIndex", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetPropertyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(
    &::UnityEngine::Renderer::SetPropertyBlock)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca2f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "SetPropertyBlock", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetPropertyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*, int32_t)>(
    &::UnityEngine::Renderer::SetPropertyBlock)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ca2f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "SetPropertyBlock", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetPropertyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(
    &::UnityEngine::Renderer::GetPropertyBlock)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca2f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetPropertyBlock", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetPropertyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*, int32_t)>(
    &::UnityEngine::Renderer::GetPropertyBlock)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ca2fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetPropertyBlock", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_enabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca3034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_enabled",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(bool)>(&::UnityEngine::Renderer::set_enabled)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca3070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_enabled", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_isVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_isVisible)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca30b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_isVisible",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_shadowCastingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Rendering::ShadowCastingMode)>(
    &::UnityEngine::Renderer::set_shadowCastingMode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca30f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_shadowCastingMode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShadowCastingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_receiveShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(bool)>(&::UnityEngine::Renderer::set_receiveShadows)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca3134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_receiveShadows", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_motionVectorGenerationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MotionVectorGenerationMode)>(
    &::UnityEngine::Renderer::set_motionVectorGenerationMode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca3178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_motionVectorGenerationMode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MotionVectorGenerationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_lightProbeUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Rendering::LightProbeUsage)>(
    &::UnityEngine::Renderer::set_lightProbeUsage)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca31bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_lightProbeUsage", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LightProbeUsage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_reflectionProbeUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Rendering::ReflectionProbeUsage)>(
    &::UnityEngine::Renderer::set_reflectionProbeUsage)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca3200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_reflectionProbeUsage", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ReflectionProbeUsage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sortingLayerID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_sortingLayerID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca3244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_sortingLayerID",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_sortingLayerID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(int32_t)>(&::UnityEngine::Renderer::set_sortingLayerID)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca3280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_sortingLayerID", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sortingOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_sortingOrder)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca32c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_sortingOrder",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_sortingOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(int32_t)>(&::UnityEngine::Renderer::set_sortingOrder)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca3300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_sortingOrder", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_allowOcclusionWhenDynamic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(bool)>(&::UnityEngine::Renderer::set_allowOcclusionWhenDynamic)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca3344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_allowOcclusionWhenDynamic", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_isPartOfStaticBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_isPartOfStaticBatch)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca3388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_isPartOfStaticBatch",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetMaterialCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::GetMaterialCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca33c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetMaterialCount",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetSharedMaterialArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> (::UnityEngine::Renderer::*)()>(
    &::UnityEngine::Renderer::GetSharedMaterialArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca3400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetSharedMaterialArray",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_materials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> (::UnityEngine::Renderer::*)()>(
    &::UnityEngine::Renderer::get_materials)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca343c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_materials",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_materials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>)>(
    &::UnityEngine::Renderer::set_materials)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca3478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_materials", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_material
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_material)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca34bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_material",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_material
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Material*)>(&::UnityEngine::Renderer::set_material)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca34f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_material", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sharedMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_sharedMaterial)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca353c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_sharedMaterial",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_sharedMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Material*)>(&::UnityEngine::Renderer::set_sharedMaterial)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca3578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_sharedMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sharedMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> (::UnityEngine::Renderer::*)()>(
    &::UnityEngine::Renderer::get_sharedMaterials)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ca35bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_sharedMaterials",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_sharedMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>)>(
    &::UnityEngine::Renderer::set_sharedMaterials)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca35f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_sharedMaterials", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetSharedMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(::System::Collections::Generic::List_1<::UnityEngine::Material*>*)>(
    &::UnityEngine::Renderer::GetSharedMaterials)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2ca363c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetSharedMaterials", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Material*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ca3770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_bounds_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(ByRef<::UnityEngine::Bounds>)>(&::UnityEngine::Renderer::get_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca2b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_bounds_Injected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_bounds_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(ByRef<::UnityEngine::Bounds>)>(&::UnityEngine::Renderer::set_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca2b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_bounds_Injected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_localBounds_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Renderer::*)(ByRef<::UnityEngine::Bounds>)>(
    &::UnityEngine::Renderer::set_localBounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ca2c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_localBounds_Injected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Bounds UnityEngine::Renderer::get_bounds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_bounds",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_bounds(::UnityEngine::Bounds value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_bounds", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Renderer::set_localBounds(::UnityEngine::Bounds value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_localBounds", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Material* UnityEngine::Renderer::GetMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetMaterial",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(this, ___internal_method);
}
inline ::UnityEngine::Material* UnityEngine::Renderer::GetSharedMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetSharedMaterial",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(this, ___internal_method);
}
inline void UnityEngine::Renderer::SetMaterial(::UnityEngine::Material* m) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "SetMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> UnityEngine::Renderer::GetMaterialArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetMaterialArray",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Renderer::CopySharedMaterialArray(ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>> m) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "CopySharedMaterialArray", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, m);
}
inline void UnityEngine::Renderer::SetMaterialArray(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> m) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "SetMaterialArray", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, m);
}
inline void UnityEngine::Renderer::Internal_SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "Internal_SetPropertyBlock", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, properties);
}
inline void UnityEngine::Renderer::Internal_GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* dest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "Internal_GetPropertyBlock", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dest);
}
inline void UnityEngine::Renderer::Internal_SetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* properties, int32_t materialIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "Internal_SetPropertyBlockMaterialIndex", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, properties, materialIndex);
}
inline void UnityEngine::Renderer::Internal_GetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* dest, int32_t materialIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "Internal_GetPropertyBlockMaterialIndex", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dest, materialIndex);
}
inline void UnityEngine::Renderer::SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "SetPropertyBlock", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, properties);
}
inline void UnityEngine::Renderer::SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties, int32_t materialIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "SetPropertyBlock", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, properties, materialIndex);
}
inline void UnityEngine::Renderer::GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetPropertyBlock", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, properties);
}
inline void UnityEngine::Renderer::GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties, int32_t materialIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetPropertyBlock", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, properties, materialIndex);
}
inline bool UnityEngine::Renderer::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_enabled",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_enabled", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Renderer::get_isVisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_isVisible",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_shadowCastingMode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShadowCastingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Renderer::set_receiveShadows(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_receiveShadows", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Renderer::set_motionVectorGenerationMode(::UnityEngine::MotionVectorGenerationMode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_motionVectorGenerationMode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MotionVectorGenerationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Renderer::set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_lightProbeUsage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LightProbeUsage>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Renderer::set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_reflectionProbeUsage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ReflectionProbeUsage>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Renderer::get_sortingLayerID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_sortingLayerID",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_sortingLayerID(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_sortingLayerID", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Renderer::get_sortingOrder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_sortingOrder",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_sortingOrder(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_sortingOrder", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Renderer::set_allowOcclusionWhenDynamic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_allowOcclusionWhenDynamic", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Renderer::get_isPartOfStaticBatch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_isPartOfStaticBatch",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Renderer::GetMaterialCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetMaterialCount",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> UnityEngine::Renderer::GetSharedMaterialArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetSharedMaterialArray",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> UnityEngine::Renderer::get_materials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_materials",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_materials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_materials", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Material* UnityEngine::Renderer::get_material() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_material",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_material(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_material", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Material* UnityEngine::Renderer::get_sharedMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_sharedMaterial",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_sharedMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_sharedMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> UnityEngine::Renderer::get_sharedMaterials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_sharedMaterials",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_sharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_sharedMaterials", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Renderer::GetSharedMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* m) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "GetSharedMaterials", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Material*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, m);
}
inline ::UnityEngine::Renderer* UnityEngine::Renderer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Renderer*>());
}
inline void UnityEngine::Renderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Renderer::get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "get_bounds_Injected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::Renderer::set_bounds_Injected(ByRef<::UnityEngine::Bounds> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_bounds_Injected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Renderer::set_localBounds_Injected(ByRef<::UnityEngine::Bounds> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Renderer*>::get(), "set_localBounds_Injected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Renderer::Renderer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
