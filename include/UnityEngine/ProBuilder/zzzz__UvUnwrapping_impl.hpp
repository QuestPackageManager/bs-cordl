#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__UvUnwrapping_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Bounds2D_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__UvUnwrapping_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform::*)()>(
    &::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform::ToString)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x32b7600;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::ProBuilder::__UvUnwrapping__UVTransform::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "translation", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform::__UvUnwrapping__UVTransform(::UnityEngine::Vector2 translation, float_t rotation, ::UnityEngine::Vector2 scale) noexcept {
  this->translation = translation;
  this->rotation = rotation;
  this->scale = scale;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform::__UvUnwrapping__UVTransform() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::__UvUnwrapping____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__UvUnwrapping____c::*)()>(&::UnityEngine::ProBuilder::__UvUnwrapping____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b7808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__UvUnwrapping____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__UvUnwrapping____c._SetAutoUV_b__0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::__UvUnwrapping____c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::__UvUnwrapping____c::_SetAutoUV_b__0_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32b7810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__UvUnwrapping____c*>::get(), "<SetAutoUV>b__0_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::__UvUnwrapping____c::setStaticF___9(::UnityEngine::ProBuilder::__UvUnwrapping____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::__UvUnwrapping____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__UvUnwrapping____c*>::get>(
      std::forward<::UnityEngine::ProBuilder::__UvUnwrapping____c*>(value));
}
inline ::UnityEngine::ProBuilder::__UvUnwrapping____c* UnityEngine::ProBuilder::__UvUnwrapping____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::__UvUnwrapping____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__UvUnwrapping____c*>::get>();
}
inline void UnityEngine::ProBuilder::__UvUnwrapping____c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>*, "<>9__0_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__UvUnwrapping____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>* UnityEngine::ProBuilder::__UvUnwrapping____c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>*, "<>9__0_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__UvUnwrapping____c*>::get>();
}
inline ::UnityEngine::ProBuilder::__UvUnwrapping____c* UnityEngine::ProBuilder::__UvUnwrapping____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::__UvUnwrapping____c*>());
}
inline void UnityEngine::ProBuilder::__UvUnwrapping____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__UvUnwrapping____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::__UvUnwrapping____c::_SetAutoUV_b__0_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__UvUnwrapping____c*>::get(), "<SetAutoUV>b__0_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__UvUnwrapping____c::__UvUnwrapping____c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.SetAutoUV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>, bool)>(&::UnityEngine::ProBuilder::UvUnwrapping::SetAutoUV)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x32b5618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "SetAutoUV", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.SetAutoAndAlignUnwrapParamsToUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
        &::UnityEngine::ProBuilder::UvUnwrapping::SetAutoAndAlignUnwrapParamsToUVs)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x32b57a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "SetAutoAndAlignUnwrapParamsToUVs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.GetAutoUnwrapSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::UvUnwrapping::GetAutoUnwrapSettings)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x32b5dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "GetAutoUnwrapSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.GetUVTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::UvUnwrapping::GetUVTransform)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x32b5ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "GetUVTransform", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.GetIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::Generic::IList_1<int32_t>*, int32_t)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::GetIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32b5fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "GetIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.CalculateDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<int32_t>*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*,
    ::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::ProBuilder::UvUnwrapping::CalculateDelta)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x32b598c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "CalculateDelta", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.GetRotatedSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector2 (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<int32_t>*, ::UnityEngine::Vector2, float_t)>(
        &::UnityEngine::ProBuilder::UvUnwrapping::GetRotatedSize)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x32b6088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "GetRotatedSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.Unwrap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::Unwrap)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x32adb18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "Unwrap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.CopyUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::UvUnwrapping::CopyUVs)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x32adc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "CopyUVs", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.ProjectTextureGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int32_t, ::UnityEngine::ProBuilder::AutoUnwrapSettings)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::ProjectTextureGroup)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x32b6c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "ProjectTextureGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.ApplyUVSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, ::System::Collections::Generic::IList_1<int32_t>*, ::UnityEngine::ProBuilder::AutoUnwrapSettings)>(
        &::UnityEngine::ProBuilder::UvUnwrapping::ApplyUVSettings)> {
  constexpr static std::size_t size = 0x8e4;
  constexpr static std::size_t addrs = 0x32b6384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "ApplyUVSettings", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.ScaleUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, ::System::Collections::Generic::IList_1<int32_t>*, ::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Bounds2D*)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::ScaleUVs)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x32b6dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "ScaleUVs", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Bounds2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.ApplyUVAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>,
                                                                                           ::System::Collections::Generic::IList_1<int32_t>*, ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::ApplyUVAnchor)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x32b7024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "ApplyUVAnchor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.UpgradeAutoUVScaleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::UpgradeAutoUVScaleOffset)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x32b73bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "UpgradeAutoUVScaleOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::UvUnwrapping::setStaticF_s_UVTransformProjectionBuffer(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, "s_UVTransformProjectionBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* UnityEngine::ProBuilder::UvUnwrapping::getStaticF_s_UVTransformProjectionBuffer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, "s_UVTransformProjectionBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get>();
}
inline void UnityEngine::ProBuilder::UvUnwrapping::setStaticF_s_TempVector2(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_TempVector2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get>(
      std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::UvUnwrapping::getStaticF_s_TempVector2() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_TempVector2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get>();
}
inline void UnityEngine::ProBuilder::UvUnwrapping::setStaticF_s_IndexBuffer(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_IndexBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get>(
      std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::UvUnwrapping::getStaticF_s_IndexBuffer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_IndexBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get>();
}
inline void UnityEngine::ProBuilder::UvUnwrapping::SetAutoUV(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                             ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces, bool _cordl_auto) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "SetAutoUV", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, faces, _cordl_auto);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::SetAutoAndAlignUnwrapParamsToUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* facesToConvert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "SetAutoAndAlignUnwrapParamsToUVs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, facesToConvert);
}
inline ::UnityEngine::ProBuilder::AutoUnwrapSettings UnityEngine::ProBuilder::UvUnwrapping::GetAutoUnwrapSettings(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                  ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "GetAutoUnwrapSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::AutoUnwrapSettings, false>(nullptr, ___internal_method, mesh, face);
}
inline ::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform UnityEngine::ProBuilder::UvUnwrapping::GetUVTransform(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                    ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "GetUVTransform", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform, false>(nullptr, ___internal_method, mesh, face);
}
inline int32_t UnityEngine::ProBuilder::UvUnwrapping::GetIndex(::System::Collections::Generic::IList_1<int32_t>* collection, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "GetIndex", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, collection, index);
}
inline ::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform UnityEngine::ProBuilder::UvUnwrapping::CalculateDelta(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* src,
                                                                                                                    ::System::Collections::Generic::IList_1<int32_t>* srcIndices,
                                                                                                                    ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* dst,
                                                                                                                    ::System::Collections::Generic::IList_1<int32_t>* dstIndices) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "CalculateDelta", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform, false>(nullptr, ___internal_method, src, srcIndices, dst, dstIndices);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::UvUnwrapping::GetRotatedSize(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points,
                                                                                    ::System::Collections::Generic::IList_1<int32_t>* indices, ::UnityEngine::Vector2 center, float_t rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "GetRotatedSize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, points, indices, center, rotation);
}
/// @param projection: ::UnityEngine::Vector3 (default: {})
inline void UnityEngine::ProBuilder::UvUnwrapping::Unwrap(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 projection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "Unwrap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, face, projection);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::CopyUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* source, ::UnityEngine::ProBuilder::Face* dest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "CopyUVs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, source, dest);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::ProjectTextureGroup(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t group, ::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "ProjectTextureGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, group, unwrapSettings);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::ApplyUVSettings(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                                                   ::UnityEngine::ProBuilder::AutoUnwrapSettings uvSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "ApplyUVSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uvs, indexes, uvSettings);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::ScaleUVs(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                                            ::UnityEngine::Vector2 scale, ::UnityEngine::ProBuilder::Bounds2D* bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "ScaleUVs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Bounds2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uvs, indexes, scale, bounds);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::ApplyUVAnchor(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                                                 ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor anchor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "ApplyUVAnchor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uvs, indexes, anchor);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::UpgradeAutoUVScaleOffset(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::UvUnwrapping*>::get(), "UpgradeAutoUVScaleOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::UvUnwrapping::UvUnwrapping() {}
