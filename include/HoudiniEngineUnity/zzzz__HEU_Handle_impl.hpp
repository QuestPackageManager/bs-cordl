#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_Handle.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TransformEuler_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_XYZOrder_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Handle_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Handle_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_HandleInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TransformEuler_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_XYZOrder_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HandleParamBinding_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Handle_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Parameters_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType::__HEU_Handle__HEU_HandleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType::__HEU_Handle__HEU_HandleType() {}
constexpr ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType HoudiniEngineUnity::__HEU_Handle__HEU_HandleType::XFORM{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType HoudiniEngineUnity::__HEU_Handle__HEU_HandleType::UNSUPPORTED{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_HandleName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::get_HandleName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2574d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_HandleName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_HandleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType (::HoudiniEngineUnity::HEU_Handle::*)()>(
    &::HoudiniEngineUnity::HEU_Handle::get_HandleType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2574d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_HandleType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_RSTOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_RSTOrder (::HoudiniEngineUnity::HEU_Handle::*)()>(
    &::HoudiniEngineUnity::HEU_Handle::get_RSTOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2574d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_RSTOrder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_XYZOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_XYZOrder (::HoudiniEngineUnity::HEU_Handle::*)()>(
    &::HoudiniEngineUnity::HEU_Handle::get_XYZOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2574d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_XYZOrder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_ConvertedTransformEuler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_TransformEuler (::HoudiniEngineUnity::HEU_Handle::*)()>(
    &::HoudiniEngineUnity::HEU_Handle::get_ConvertedTransformEuler)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2574d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                                                                               "get_ConvertedTransformEuler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.HasTranslateHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::HasTranslateHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2574dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "HasTranslateHandle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.HasRotateHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::HasRotateHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2574dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "HasRotateHandle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.HasScaleHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::HasScaleHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2574dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "HasScaleHandle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.IsTranslateHandleDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::IsTranslateHandleDisabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2574ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                                                                               "IsTranslateHandleDisabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.IsRotateHandleDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::IsRotateHandleDisabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2574dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                                                                               "IsRotateHandleDisabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.IsScaleHandleDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::IsScaleHandleDisabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2574e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                                                                               "IsScaleHandleDisabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.GetTranslateBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HandleParamBinding* (::HoudiniEngineUnity::HEU_Handle::*)()>(
    &::HoudiniEngineUnity::HEU_Handle::GetTranslateBinding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2574e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "GetTranslateBinding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.GetRotateBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HandleParamBinding* (::HoudiniEngineUnity::HEU_Handle::*)()>(
    &::HoudiniEngineUnity::HEU_Handle::GetRotateBinding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2574e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "GetRotateBinding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.GetScaleBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HandleParamBinding* (::HoudiniEngineUnity::HEU_Handle::*)()>(
    &::HoudiniEngineUnity::HEU_Handle::GetScaleBinding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2574e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "GetScaleBinding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_HandlePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HoudiniEngineUnity::HEU_Handle::*)()>(
    &::HoudiniEngineUnity::HEU_Handle::get_HandlePosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2574e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_HandlePosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_HandleRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::HoudiniEngineUnity::HEU_Handle::*)()>(
    &::HoudiniEngineUnity::HEU_Handle::get_HandleRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2574e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_HandleRotation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_HandleScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::get_HandleScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2574e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_HandleScale",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.SetupHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::StringW, ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType,
                                                           ByRef<::HoudiniEngineUnity::HAPI_HandleInfo>, ::HoudiniEngineUnity::HEU_Parameters*)>(&::HoudiniEngineUnity::HEU_Handle::SetupHandle)> {
  constexpr static std::size_t size = 0x7cc;
  constexpr static std::size_t addrs = 0x2574e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "SetupHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Parameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.CleanUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::CleanUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2575d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "CleanUp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.GenerateTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_Parameters*)>(&::HoudiniEngineUnity::HEU_Handle::GenerateTransform)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x257588c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "GenerateTransform", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Parameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.GetUpdatedPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ByRef<::UnityEngine::Vector3>)>(
    &::HoudiniEngineUnity::HEU_Handle::GetUpdatedPosition)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2575d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "GetUpdatedPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.GetUpdatedRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ByRef<::UnityEngine::Quaternion>)>(&::HoudiniEngineUnity::HEU_Handle::GetUpdatedRotation)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2575efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "GetUpdatedRotation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.IsSpecialRSTOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HAPI_RSTOrder)>(&::HoudiniEngineUnity::HEU_Handle::IsSpecialRSTOrder)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2575d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "IsSpecialRSTOrder", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_RSTOrder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_Handle*)>(
    &::HoudiniEngineUnity::HEU_Handle::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x25760f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Handle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x25765f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>"
constexpr HoudiniEngineUnity::HEU_Handle::operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>*
HoudiniEngineUnity::HEU_Handle::i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_Handle__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>*>(static_cast<void*>(this));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleName;
}
constexpr void HoudiniEngineUnity::HEU_Handle::__cordl_internal_set__handleName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handleName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleType;
}
constexpr ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType const& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleType;
}
constexpr void HoudiniEngineUnity::HEU_Handle::__cordl_internal_set__handleType(::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handleType = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleIndex;
}
constexpr void HoudiniEngineUnity::HEU_Handle::__cordl_internal_set__handleIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handleIndex = value;
}
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding*& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleParamTranslateBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleParamTranslateBinding;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HandleParamBinding*> const& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleParamTranslateBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleParamTranslateBinding;
}
constexpr void HoudiniEngineUnity::HEU_Handle::__cordl_internal_set__handleParamTranslateBinding(::HoudiniEngineUnity::HEU_HandleParamBinding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handleParamTranslateBinding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding*& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleParamRotateBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleParamRotateBinding;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HandleParamBinding*> const& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleParamRotateBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleParamRotateBinding;
}
constexpr void HoudiniEngineUnity::HEU_Handle::__cordl_internal_set__handleParamRotateBinding(::HoudiniEngineUnity::HEU_HandleParamBinding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handleParamRotateBinding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding*& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleParamScaleBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleParamScaleBinding;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HandleParamBinding*> const& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleParamScaleBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleParamScaleBinding;
}
constexpr void HoudiniEngineUnity::HEU_Handle::__cordl_internal_set__handleParamScaleBinding(::HoudiniEngineUnity::HEU_HandleParamBinding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handleParamScaleBinding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handlePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlePosition;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handlePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlePosition;
}
constexpr void HoudiniEngineUnity::HEU_Handle::__cordl_internal_set__handlePosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handlePosition = value;
}
constexpr ::UnityEngine::Quaternion& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleRotation;
}
constexpr ::UnityEngine::Quaternion const& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleRotation;
}
constexpr void HoudiniEngineUnity::HEU_Handle::__cordl_internal_set__handleRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handleRotation = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleScale;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__handleScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleScale;
}
constexpr void HoudiniEngineUnity::HEU_Handle::__cordl_internal_set__handleScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handleScale = value;
}
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__rstOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rstOrder;
}
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder const& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__rstOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rstOrder;
}
constexpr void HoudiniEngineUnity::HEU_Handle::__cordl_internal_set__rstOrder(::HoudiniEngineUnity::HAPI_RSTOrder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rstOrder = value;
}
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__xyzOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xyzOrder;
}
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder const& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__xyzOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xyzOrder;
}
constexpr void HoudiniEngineUnity::HEU_Handle::__cordl_internal_set__xyzOrder(::HoudiniEngineUnity::HAPI_XYZOrder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xyzOrder = value;
}
constexpr ::HoudiniEngineUnity::HAPI_TransformEuler& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__convertedTransformEuler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____convertedTransformEuler;
}
constexpr ::HoudiniEngineUnity::HAPI_TransformEuler const& HoudiniEngineUnity::HEU_Handle::__cordl_internal_get__convertedTransformEuler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____convertedTransformEuler;
}
constexpr void HoudiniEngineUnity::HEU_Handle::__cordl_internal_set__convertedTransformEuler(::HoudiniEngineUnity::HAPI_TransformEuler value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____convertedTransformEuler = value;
}
inline ::StringW HoudiniEngineUnity::HEU_Handle::get_HandleName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_HandleName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType HoudiniEngineUnity::HEU_Handle::get_HandleType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_HandleType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_RSTOrder HoudiniEngineUnity::HEU_Handle::get_RSTOrder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_RSTOrder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_RSTOrder, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_XYZOrder HoudiniEngineUnity::HEU_Handle::get_XYZOrder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_XYZOrder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_XYZOrder, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_TransformEuler HoudiniEngineUnity::HEU_Handle::get_ConvertedTransformEuler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                                                                             "get_ConvertedTransformEuler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_TransformEuler, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::HasTranslateHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "HasTranslateHandle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::HasRotateHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "HasRotateHandle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::HasScaleHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "HasScaleHandle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::IsTranslateHandleDisabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                                                                             "IsTranslateHandleDisabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::IsRotateHandleDisabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "IsRotateHandleDisabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::IsScaleHandleDisabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "IsScaleHandleDisabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HandleParamBinding* HoudiniEngineUnity::HEU_Handle::GetTranslateBinding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "GetTranslateBinding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HandleParamBinding*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HandleParamBinding* HoudiniEngineUnity::HEU_Handle::GetRotateBinding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "GetRotateBinding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HandleParamBinding*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HandleParamBinding* HoudiniEngineUnity::HEU_Handle::GetScaleBinding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "GetScaleBinding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HandleParamBinding*, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::HEU_Handle::get_HandlePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_HandlePosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion HoudiniEngineUnity::HEU_Handle::get_HandleRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_HandleRotation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::HEU_Handle::get_HandleScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "get_HandleScale",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::SetupHandle(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetID, int32_t handleIndex, ::StringW handleName,
                                                        ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType handleType, ByRef<::HoudiniEngineUnity::HAPI_HandleInfo> handleInfo,
                                                        ::HoudiniEngineUnity::HEU_Parameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "SetupHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Parameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, assetID, handleIndex, handleName, handleType, handleInfo, parameters);
}
inline void HoudiniEngineUnity::HEU_Handle::CleanUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "CleanUp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Handle::GenerateTransform(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_Parameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "GenerateTransform", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Parameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, parameters);
}
inline bool HoudiniEngineUnity::HEU_Handle::GetUpdatedPosition(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ByRef<::UnityEngine::Vector3> inPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "GetUpdatedPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, asset, inPosition);
}
inline bool HoudiniEngineUnity::HEU_Handle::GetUpdatedRotation(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ByRef<::UnityEngine::Quaternion> inRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "GetUpdatedRotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, asset, inRotation);
}
inline bool HoudiniEngineUnity::HEU_Handle::IsSpecialRSTOrder(::HoudiniEngineUnity::HAPI_RSTOrder rstOrder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "IsSpecialRSTOrder", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_RSTOrder>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rstOrder);
}
inline bool HoudiniEngineUnity::HEU_Handle::IsEquivalentTo(::HoudiniEngineUnity::HEU_Handle* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Handle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_Handle* HoudiniEngineUnity::HEU_Handle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_Handle*>());
}
inline void HoudiniEngineUnity::HEU_Handle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_Handle::HEU_Handle() {}
