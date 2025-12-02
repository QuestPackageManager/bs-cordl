#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SupportedOnRenderPipelineAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedOnRenderPipelineAttribute_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedOnRenderPipelineAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode::SupportedOnRenderPipelineAttribute_SupportedMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode::SupportedOnRenderPipelineAttribute_SupportedMode() {}
constexpr ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode::Unsupported{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode::Supported{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode::SupportedByBaseClass{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::*)()>(
    &::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68e8c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c.__ctor_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::*)(::System::Type*)>(
    &::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::__ctor_b__6_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68e8c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>::get(), "<.ctor>b__6_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c.__cctor_b__12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (
    ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::*)()>(&::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::__cctor_b__12_0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x68e8c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>::get(), "<.cctor>b__12_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::setStaticF___9(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>::get>(
      std::forward<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>(value));
}
inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c* UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>::get>();
}
inline void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::setStaticF___9__6_0(::System::Func_2<::System::Type*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, ::StringW>*, "<>9__6_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>::get>(
      std::forward<::System::Func_2<::System::Type*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Type*, ::StringW>* UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, ::StringW>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>::get>();
}
inline void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::__ctor_b__6_0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>::get(), "<.ctor>b__6_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, t);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::__cctor_b__12_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>::get(), "<.cctor>b__12_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c* UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::SupportedOnRenderPipelineAttribute___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute.get_renderPipelineTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (
    ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::*)()>(&::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::get_renderPipelineTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e84cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get(),
                                                 "get_renderPipelineTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::*)(::System::Type*)>(
    &::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x68e84d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::*)(
    ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x68e8578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute.GetSupportedMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode (
    ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::*)(::System::Type*)>(&::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::GetSupportedMode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68e8884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get(), "GetSupportedMode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute.GetSupportedMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode (*)(
    ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Type*)>(&::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::GetSupportedMode)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x68e88f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get(), "GetSupportedMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute.IsTypeSupportedOnRenderPipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(
    &::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::IsTypeSupportedOnRenderPipeline)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68e8a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get(),
                                                 "IsTypeSupportedOnRenderPipeline", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::__cordl_internal_get__renderPipelineTypes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPipelineTypes_k__BackingField;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::__cordl_internal_get__renderPipelineTypes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPipelineTypes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::__cordl_internal_set__renderPipelineTypes_k__BackingField(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderPipelineTypes_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::setStaticF_k_DefaultRenderPipelineAsset(::System::Lazy_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* value) {
  ::cordl_internals::setStaticField<::System::Lazy_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*, "k_DefaultRenderPipelineAsset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get>(
      std::forward<::System::Lazy_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*>(value));
}
inline ::System::Lazy_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::getStaticF_k_DefaultRenderPipelineAsset() {
  return ::cordl_internals::getStaticField<::System::Lazy_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*, "k_DefaultRenderPipelineAsset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get>();
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::get_renderPipelineTypes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get(), "get_renderPipelineTypes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::_ctor(::System::Type* renderPipeline) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderPipeline);
}
inline void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> renderPipeline) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderPipeline);
}
inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode
UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::GetSupportedMode(::System::Type* renderPipelineAssetType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get(), "GetSupportedMode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode, false>(this, ___internal_method, renderPipelineAssetType);
}
inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode
UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::GetSupportedMode(::ArrayW<::System::Type*, ::Array<::System::Type*>*> renderPipelineTypes, ::System::Type* renderPipelineAssetType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get(), "GetSupportedMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode, false>(nullptr, ___internal_method, renderPipelineTypes,
                                                                                                                                renderPipelineAssetType);
}
inline bool UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::IsTypeSupportedOnRenderPipeline(::System::Type* type, ::System::Type* renderPipelineAssetType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>::get(),
                                               "IsTypeSupportedOnRenderPipeline", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, renderPipelineAssetType);
}
inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute* UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::New_ctor(::System::Type* renderPipeline) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(renderPipeline));
}
inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*
UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::New_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> renderPipeline) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(renderPipeline));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::SupportedOnRenderPipelineAttribute() {}
