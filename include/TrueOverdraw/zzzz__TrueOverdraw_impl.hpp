#pragma once
// IWYU pragma private; include "TrueOverdraw/TrueOverdraw.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "TrueOverdraw/zzzz__TrueOverdraw_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "TrueOverdraw/zzzz__TrueOverdraw_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType::TrueOverdraw_OverdrawType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType::TrueOverdraw_OverdrawType() {}
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType TrueOverdraw::TrueOverdraw_OverdrawType::None{ static_cast<int32_t>(0x0) };
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType TrueOverdraw::TrueOverdraw_OverdrawType::Transparent{ static_cast<int32_t>(0x1) };
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType TrueOverdraw::TrueOverdraw_OverdrawType::Opaque{ static_cast<int32_t>(0x2) };
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType TrueOverdraw::TrueOverdraw_OverdrawType::Everything{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.get_renderersLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::get_renderersLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d28cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "get_renderersLength",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.get_overdrawType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrueOverdraw::TrueOverdraw_OverdrawType (::TrueOverdraw::TrueOverdraw::*)()>(
    &::TrueOverdraw::TrueOverdraw::get_overdrawType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d28cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "get_overdrawType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.set_overdrawType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)(::TrueOverdraw::TrueOverdraw_OverdrawType)>(
    &::TrueOverdraw::TrueOverdraw::set_overdrawType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d28ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "set_overdrawType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrueOverdraw::TrueOverdraw_OverdrawType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)(::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>)>(
    &::TrueOverdraw::TrueOverdraw::_ctor)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5d28cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.Enable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::Enable)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5d290a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "Enable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.ResolveRendererColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Renderer*, ::UnityEngine::Material*)>(
    &::TrueOverdraw::TrueOverdraw::ResolveRendererColor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5d29434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "ResolveRendererColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.Disable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::Disable)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5d297a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "Disable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::Dispose)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d299d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.ShowEverything
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::ShowEverything)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d29ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "ShowEverything",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.ShowOnlyTransparent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::ShowOnlyTransparent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d29be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "ShowOnlyTransparent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.ShowOnlyOpaque
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrueOverdraw::TrueOverdraw::*)()>(&::TrueOverdraw::TrueOverdraw::ShowOnlyOpaque)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d29c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "ShowOnlyOpaque",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.SetGlobalFloats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t)>(&::TrueOverdraw::TrueOverdraw::SetGlobalFloats)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d29388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "SetGlobalFloats", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.SetOverdrawValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t)>(&::TrueOverdraw::TrueOverdraw::SetOverdrawValues)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d29b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "SetOverdrawValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrueOverdraw::TrueOverdraw.SetMaterialValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Color)>(&::TrueOverdraw::TrueOverdraw::SetMaterialValues)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d29694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "SetMaterialValues", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType& TrueOverdraw::TrueOverdraw::__cordl_internal_get__overdrawType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overdrawType_k__BackingField;
}
constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType const& TrueOverdraw::TrueOverdraw::__cordl_internal_get__overdrawType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overdrawType_k__BackingField;
}
constexpr void TrueOverdraw::TrueOverdraw::__cordl_internal_set__overdrawType_k__BackingField(::TrueOverdraw::TrueOverdraw_OverdrawType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overdrawType_k__BackingField = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*>& TrueOverdraw::TrueOverdraw::__cordl_internal_get__renderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> const& TrueOverdraw::TrueOverdraw::__cordl_internal_get__renderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderers;
}
constexpr void TrueOverdraw::TrueOverdraw::__cordl_internal_set__renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                   ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>&
TrueOverdraw::TrueOverdraw::__cordl_internal_get__cachedSharedMaterials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedSharedMaterials;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                   ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*> const&
TrueOverdraw::TrueOverdraw::__cordl_internal_get__cachedSharedMaterials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedSharedMaterials;
}
constexpr void TrueOverdraw::TrueOverdraw::__cordl_internal_set__cachedSharedMaterials(::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                                                                                                ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>
                                                                                           value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedSharedMaterials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                   ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>&
TrueOverdraw::TrueOverdraw::__cordl_internal_get__cachedMaterialInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedMaterialInstances;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                   ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*> const&
TrueOverdraw::TrueOverdraw::__cordl_internal_get__cachedMaterialInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedMaterialInstances;
}
constexpr void TrueOverdraw::TrueOverdraw::__cordl_internal_set__cachedMaterialInstances(::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                                                                                                  ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>
                                                                                             value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedMaterialInstances)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__blendSrcColorFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_blendSrcColorFactor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__blendSrcColorFactor() {
  return ::cordl_internals::getStaticField<int32_t, "_blendSrcColorFactor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__blendDstColorFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_blendDstColorFactor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__blendDstColorFactor() {
  return ::cordl_internals::getStaticField<int32_t, "_blendDstColorFactor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__blendSrcAlphaFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_blendSrcAlphaFactor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__blendSrcAlphaFactor() {
  return ::cordl_internals::getStaticField<int32_t, "_blendSrcAlphaFactor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__blendDstAlphaFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_blendDstAlphaFactor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__blendDstAlphaFactor() {
  return ::cordl_internals::getStaticField<int32_t, "_blendDstAlphaFactor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__blendOperation(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_blendOperation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__blendOperation() {
  return ::cordl_internals::getStaticField<int32_t, "_blendOperation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__trueOverdrawProperty(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_trueOverdrawProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__trueOverdrawProperty() {
  return ::cordl_internals::getStaticField<int32_t, "_trueOverdrawProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__transparentOverdraw(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_transparentOverdraw", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__transparentOverdraw() {
  return ::cordl_internals::getStaticField<int32_t, "_transparentOverdraw", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__opaqueOverdraw(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_opaqueOverdraw", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__opaqueOverdraw() {
  return ::cordl_internals::getStaticField<int32_t, "_opaqueOverdraw", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__overdrawColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_overdrawColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>(std::forward<int32_t>(value));
}
inline int32_t TrueOverdraw::TrueOverdraw::getStaticF__overdrawColor() {
  return ::cordl_internals::getStaticField<int32_t, "_overdrawColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__environmentElementsColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "_environmentElementsColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color TrueOverdraw::TrueOverdraw::getStaticF__environmentElementsColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "_environmentElementsColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>();
}
inline void TrueOverdraw::TrueOverdraw::setStaticF__gameplayElementsColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "_gameplayElementsColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color TrueOverdraw::TrueOverdraw::getStaticF__gameplayElementsColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "_gameplayElementsColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get>();
}
inline int32_t TrueOverdraw::TrueOverdraw::get_renderersLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "get_renderersLength",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::TrueOverdraw::TrueOverdraw_OverdrawType TrueOverdraw::TrueOverdraw::get_overdrawType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "get_overdrawType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TrueOverdraw::TrueOverdraw_OverdrawType, false>(this, ___internal_method);
}
inline void TrueOverdraw::TrueOverdraw::set_overdrawType(::TrueOverdraw::TrueOverdraw_OverdrawType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "set_overdrawType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrueOverdraw::TrueOverdraw_OverdrawType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void TrueOverdraw::TrueOverdraw::_ctor(::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> renderers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderers);
}
inline void TrueOverdraw::TrueOverdraw::Enable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "Enable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Color TrueOverdraw::TrueOverdraw::ResolveRendererColor(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "ResolveRendererColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, renderer, material);
}
inline void TrueOverdraw::TrueOverdraw::Disable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "Disable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TrueOverdraw::TrueOverdraw::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TrueOverdraw::TrueOverdraw::ShowEverything() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "ShowEverything",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TrueOverdraw::TrueOverdraw::ShowOnlyTransparent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "ShowOnlyTransparent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TrueOverdraw::TrueOverdraw::ShowOnlyOpaque() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "ShowOnlyOpaque",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TrueOverdraw::TrueOverdraw::SetGlobalFloats(float_t trueOverdraw, float_t opaque, float_t transparent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "SetGlobalFloats", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trueOverdraw, opaque, transparent);
}
inline void TrueOverdraw::TrueOverdraw::SetOverdrawValues(float_t opaque, float_t transparent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "SetOverdrawValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, opaque, transparent);
}
inline void TrueOverdraw::TrueOverdraw::SetMaterialValues(::UnityEngine::Material* material, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrueOverdraw::TrueOverdraw*>::get(), "SetMaterialValues", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, material, color);
}
inline ::TrueOverdraw::TrueOverdraw* TrueOverdraw::TrueOverdraw::New_ctor(::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> renderers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TrueOverdraw::TrueOverdraw*>(renderers));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr TrueOverdraw::TrueOverdraw::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* TrueOverdraw::TrueOverdraw::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::TrueOverdraw::TrueOverdraw::TrueOverdraw() {}
