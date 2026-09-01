#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\SupportedOnRenderPipelineAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::*)()>(
    &::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b1cc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c.__ctor_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::*)(::System::Type*)>(
    &::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::__ctor_b__6_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b1cc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>(), { "<.ctor>b__6_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c.__cctor_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::*)()>(
    &::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::__cctor_b__12_0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b1ccac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>(), { "<.cctor>b__12_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::setStaticF___9(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*, "<>9", ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>(
      std::forward<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>(value));
}
inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c* UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*, "<>9", ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>();
}
inline void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::setStaticF___9__6_0(::System::Func_2<::System::Type*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, ::StringW>*, "<>9__6_0", ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>(
      std::forward<::System::Func_2<::System::Type*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Type*, ::StringW>* UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, ::StringW>*, "<>9__6_0", ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>();
}
inline void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::__ctor_b__6_0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>(), { "<.ctor>b__6_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, t);
}
inline ::ArrayW<::System::Type*> UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::__cctor_b__12_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>(), { "<.cctor>b__12_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c* UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c::SupportedOnRenderPipelineAttribute___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute.get_renderPipelineTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::*)()>(
    &::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::get_renderPipelineTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1c528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(), { "get_renderPipelineTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::*)(::System::Type*)>(
    &::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b1c530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::*)(::ArrayW<::System::Type*>)>(
    &::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x6b1c5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute.GetSupportedMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode (::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::*)(
    ::System::Type*)>(&::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::GetSupportedMode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b1c8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(), { "GetSupportedMode", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute.GetSupportedMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode (*)(::ArrayW<::System::Type*>, ::System::Type*)>(
    &::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::GetSupportedMode)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b1c94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(),
                                                             { "GetSupportedMode", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute.IsTypeSupportedOnRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::IsTypeSupportedOnRenderPipeline)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b1ca94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(),
                                                             { "IsTypeSupportedOnRenderPipeline", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::__cordl_internal_get__renderPipelineTypes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPipelineTypes_k__BackingField;
}
constexpr ::ArrayW<::System::Type*> const& UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::__cordl_internal_get__renderPipelineTypes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPipelineTypes_k__BackingField;
}
constexpr void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::__cordl_internal_set__renderPipelineTypes_k__BackingField(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderPipelineTypes_k__BackingField = value;
}
inline void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::setStaticF_k_DefaultRenderPipelineAsset(::System::Lazy_1<::ArrayW<::System::Type*>>* value) {
  ::cordl_internals::setStaticField<::System::Lazy_1<::ArrayW<::System::Type*>>*, "k_DefaultRenderPipelineAsset", ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(
      std::forward<::System::Lazy_1<::ArrayW<::System::Type*>>*>(value));
}
inline ::System::Lazy_1<::ArrayW<::System::Type*>>* UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::getStaticF_k_DefaultRenderPipelineAsset() {
  return ::cordl_internals::getStaticField<::System::Lazy_1<::ArrayW<::System::Type*>>*, "k_DefaultRenderPipelineAsset", ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>();
}
inline ::ArrayW<::System::Type*> UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::get_renderPipelineTypes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(), { "get_renderPipelineTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::_ctor(::System::Type* renderPipeline) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPipeline);
}
inline void UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::_ctor(::ArrayW<::System::Type*> renderPipeline) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPipeline);
}
inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode
UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::GetSupportedMode(::System::Type* renderPipelineAssetType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(), { "GetSupportedMode", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode>(this, ___internal_method, renderPipelineAssetType);
}
inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode
UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::GetSupportedMode(::ArrayW<::System::Type*> renderPipelineTypes, ::System::Type* renderPipelineAssetType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(),
                                                           { "GetSupportedMode", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode>(nullptr, ___internal_method, renderPipelineTypes, renderPipelineAssetType);
}
inline bool UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::IsTypeSupportedOnRenderPipeline(::System::Type* type, ::System::Type* renderPipelineAssetType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(),
                                                           { "IsTypeSupportedOnRenderPipeline", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, renderPipelineAssetType);
}
inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute* UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::New_ctor(::System::Type* renderPipeline) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(renderPipeline));
}
inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute* UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::New_ctor(::ArrayW<::System::Type*> renderPipeline) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*>(renderPipeline));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute::SupportedOnRenderPipelineAttribute() {}
