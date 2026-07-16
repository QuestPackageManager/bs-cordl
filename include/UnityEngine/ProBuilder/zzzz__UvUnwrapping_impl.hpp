#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/UvUnwrapping.hpp"
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
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping_UVTransform.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::UvUnwrapping_UVTransform::*)()>(&::UnityEngine::ProBuilder::UvUnwrapping_UVTransform::ToString)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x66f59c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping_UVTransform>(), { ::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping_UVTransform>(), 3 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::ProBuilder::UvUnwrapping_UVTransform::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping_UVTransform>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "translation", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::UvUnwrapping_UVTransform::UvUnwrapping_UVTransform(::UnityEngine::Vector2 translation, float_t rotation, ::UnityEngine::Vector2 scale) noexcept {
  this->translation = translation;
  this->rotation = rotation;
  this->scale = scale;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::UvUnwrapping_UVTransform::UvUnwrapping_UVTransform() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::UvUnwrapping___c::*)()>(&::UnityEngine::ProBuilder::UvUnwrapping___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66f5b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping___c._SetAutoUV_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::UvUnwrapping___c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::UvUnwrapping___c::_SetAutoUV_b__0_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66f5b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping___c*>(), { "<SetAutoUV>b__0_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::UvUnwrapping___c::setStaticF___9(::UnityEngine::ProBuilder::UvUnwrapping___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::UvUnwrapping___c*, "<>9", ::UnityEngine::ProBuilder::UvUnwrapping___c*>(
      std::forward<::UnityEngine::ProBuilder::UvUnwrapping___c*>(value));
}
inline ::UnityEngine::ProBuilder::UvUnwrapping___c* UnityEngine::ProBuilder::UvUnwrapping___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::UvUnwrapping___c*, "<>9", ::UnityEngine::ProBuilder::UvUnwrapping___c*>();
}
inline void UnityEngine::ProBuilder::UvUnwrapping___c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>*, "<>9__0_0", ::UnityEngine::ProBuilder::UvUnwrapping___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>* UnityEngine::ProBuilder::UvUnwrapping___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>*, "<>9__0_0", ::UnityEngine::ProBuilder::UvUnwrapping___c*>();
}
inline void UnityEngine::ProBuilder::UvUnwrapping___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::UvUnwrapping___c::_SetAutoUV_b__0_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping___c*>(), { "<SetAutoUV>b__0_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::UvUnwrapping___c* UnityEngine::ProBuilder::UvUnwrapping___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::UvUnwrapping___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::UvUnwrapping___c::UvUnwrapping___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.SetAutoUV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*>, bool)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::SetAutoUV)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x66f38c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                         { "SetAutoUV", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.SetAutoAndAlignUnwrapParamsToUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::SetAutoAndAlignUnwrapParamsToUVs)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x66f3a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                            { "SetAutoAndAlignUnwrapParamsToUVs",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.GetAutoUnwrapSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::GetAutoUnwrapSettings)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x66f4088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                         { "GetAutoUnwrapSettings", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.GetUVTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::UvUnwrapping_UVTransform (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::GetUVTransform)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x66f4180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                { "GetUVTransform", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.GetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::IList_1<int32_t>*, int32_t)>(&::UnityEngine::ProBuilder::UvUnwrapping::GetIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x66f428c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                             { "GetIndex", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.CalculateDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::UvUnwrapping_UVTransform (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<int32_t>*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*,
    ::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::ProBuilder::UvUnwrapping::CalculateDelta)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x66f3c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                            { "CalculateDelta",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(),
                                ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.GetRotatedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<int32_t>*,
                                                                                  ::UnityEngine::Vector2, float_t)>(&::UnityEngine::ProBuilder::UvUnwrapping::GetRotatedSize)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x66f434c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                { "GetRotatedSize",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.Unwrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::Unwrap)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x66ec09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
            { "Unwrap", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.CopyUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::CopyUVs)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x66ec1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                             { "CopyUVs",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(),
                                                                 ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.ProjectTextureGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int32_t, ::UnityEngine::ProBuilder::AutoUnwrapSettings)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::ProjectTextureGroup)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x66f4ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                            { "ProjectTextureGroup",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.ApplyUVSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector2>, ::System::Collections::Generic::IList_1<int32_t>*, ::UnityEngine::ProBuilder::AutoUnwrapSettings)>(
    &::UnityEngine::ProBuilder::UvUnwrapping::ApplyUVSettings)> {
  constexpr static std::size_t size = 0x964;
  constexpr static std::size_t addrs = 0x66f468c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                             { "ApplyUVSettings",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(),
                                                                 ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.ScaleUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector2>, ::System::Collections::Generic::IList_1<int32_t>*, ::UnityEngine::Vector2,
                                                                ::UnityEngine::ProBuilder::Bounds2D*)>(&::UnityEngine::ProBuilder::UvUnwrapping::ScaleUVs)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x66f51b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                             { "ScaleUVs",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ProBuilder::Bounds2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.ApplyUVAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector2>, ::System::Collections::Generic::IList_1<int32_t>*,
                                                                ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor)>(&::UnityEngine::ProBuilder::UvUnwrapping::ApplyUVAnchor)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x66f53cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                             { "ApplyUVAnchor",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(),
                                                                 ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::UvUnwrapping.UpgradeAutoUVScaleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::UvUnwrapping::UpgradeAutoUVScaleOffset)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x66f5768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                                                           { "UpgradeAutoUVScaleOffset", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::UvUnwrapping::setStaticF_s_UVTransformProjectionBuffer(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, "s_UVTransformProjectionBuffer", ::UnityEngine::ProBuilder::UvUnwrapping*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* UnityEngine::ProBuilder::UvUnwrapping::getStaticF_s_UVTransformProjectionBuffer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, "s_UVTransformProjectionBuffer", ::UnityEngine::ProBuilder::UvUnwrapping*>();
}
inline void UnityEngine::ProBuilder::UvUnwrapping::setStaticF_s_TempVector2(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_TempVector2", ::UnityEngine::ProBuilder::UvUnwrapping*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::UvUnwrapping::getStaticF_s_TempVector2() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_TempVector2", ::UnityEngine::ProBuilder::UvUnwrapping*>();
}
inline void UnityEngine::ProBuilder::UvUnwrapping::setStaticF_s_IndexBuffer(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_IndexBuffer", ::UnityEngine::ProBuilder::UvUnwrapping*>(
      std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::UvUnwrapping::getStaticF_s_IndexBuffer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_IndexBuffer", ::UnityEngine::ProBuilder::UvUnwrapping*>();
}
inline void UnityEngine::ProBuilder::UvUnwrapping::SetAutoUV(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*> faces, bool _cordl_auto) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                       { "SetAutoUV", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, faces, _cordl_auto);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::SetAutoAndAlignUnwrapParamsToUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* facesToConvert) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                          { "SetAutoAndAlignUnwrapParamsToUVs",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, facesToConvert);
}
inline ::UnityEngine::ProBuilder::AutoUnwrapSettings UnityEngine::ProBuilder::UvUnwrapping::GetAutoUnwrapSettings(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                  ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                              { "GetAutoUnwrapSettings", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::AutoUnwrapSettings>(nullptr, ___internal_method, mesh, face);
}
inline ::UnityEngine::ProBuilder::UvUnwrapping_UVTransform UnityEngine::ProBuilder::UvUnwrapping::GetUVTransform(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                 ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                              { "GetUVTransform", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::UvUnwrapping_UVTransform>(nullptr, ___internal_method, mesh, face);
}
inline int32_t UnityEngine::ProBuilder::UvUnwrapping::GetIndex(::System::Collections::Generic::IList_1<int32_t>* collection, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                           { "GetIndex", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, collection, index);
}
inline ::UnityEngine::ProBuilder::UvUnwrapping_UVTransform UnityEngine::ProBuilder::UvUnwrapping::CalculateDelta(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* src,
                                                                                                                 ::System::Collections::Generic::IList_1<int32_t>* srcIndices,
                                                                                                                 ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* dst,
                                                                                                                 ::System::Collections::Generic::IList_1<int32_t>* dstIndices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                          { "CalculateDelta",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(),
                              ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::UvUnwrapping_UVTransform>(nullptr, ___internal_method, src, srcIndices, dst, dstIndices);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::UvUnwrapping::GetRotatedSize(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points,
                                                                                    ::System::Collections::Generic::IList_1<int32_t>* indices, ::UnityEngine::Vector2 center, float_t rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                              { "GetRotatedSize",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, points, indices, center, rotation);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::Unwrap(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 projection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
          { "Unwrap", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, face, projection);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::CopyUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* source, ::UnityEngine::ProBuilder::Face* dest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                           { "CopyUVs",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(),
                                                               ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, source, dest);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::ProjectTextureGroup(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t group, ::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(), { "ProjectTextureGroup",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>(),
                                                                                                               ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, group, unwrapSettings);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::ApplyUVSettings(::ArrayW<::UnityEngine::Vector2> uvs, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                                                   ::UnityEngine::ProBuilder::AutoUnwrapSettings uvSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                           { "ApplyUVSettings",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(),
                                                               ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uvs, indexes, uvSettings);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::ScaleUVs(::ArrayW<::UnityEngine::Vector2> uvs, ::System::Collections::Generic::IList_1<int32_t>* indexes, ::UnityEngine::Vector2 scale,
                                                            ::UnityEngine::ProBuilder::Bounds2D* bounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                           { "ScaleUVs",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(),
                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ProBuilder::Bounds2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uvs, indexes, scale, bounds);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::ApplyUVAnchor(::ArrayW<::UnityEngine::Vector2> uvs, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                                                 ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                           { "ApplyUVAnchor",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(),
                                                               ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uvs, indexes, anchor);
}
inline void UnityEngine::ProBuilder::UvUnwrapping::UpgradeAutoUVScaleOffset(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::UvUnwrapping*>(),
                                                                                         { "UpgradeAutoUVScaleOffset", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::UvUnwrapping::UvUnwrapping() {}
