#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderVariantsSO_def.hpp"
#include "GlobalNamespace/zzzz__ShaderVariantsSO_def.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant.get_passType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::PassType (::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::*)()>(
    &::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::get_passType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28f4958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>::get(), "get_passType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant.get_keywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::*)()>(
    &::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::get_keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28f4960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>::get(), "get_keywords",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::*)(
    ::UnityEngine::Rendering::PassType, ::StringW)>(&::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x28f4968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::PassType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PassType& GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__cordl_internal_get__passType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passType;
}
constexpr ::UnityEngine::Rendering::PassType const& GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__cordl_internal_get__passType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passType;
}
constexpr void GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__cordl_internal_set__passType(::UnityEngine::Rendering::PassType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____passType = value;
}
constexpr ::StringW& GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__cordl_internal_get__keywords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keywords;
}
constexpr ::StringW const& GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__cordl_internal_get__keywords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keywords;
}
constexpr void GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__cordl_internal_set__keywords(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keywords)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::PassType GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::get_passType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>::get(), "get_passType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PassType, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::get_keywords() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>::get(), "get_keywords",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant* GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::New_ctor(::UnityEngine::Rendering::PassType passType,
                                                                                                                                            ::StringW keywords) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>(passType, keywords));
}
inline void GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::_ctor(::UnityEngine::Rendering::PassType passType, ::StringW keywords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::PassType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passType, keywords);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__ShaderVariantsSO__ShaderVariant__Variant() {}
//  Writing Method size for method: ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant.get_variants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> (
        ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::*)()>(&::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::get_variants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28f491c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>::get(),
                                                                               "get_variants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant.get_shader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::*)()>(
    &::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::get_shader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28f4924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>::get(),
                                                                               "get_shader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::*)(
    ::UnityEngine::Shader*, ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>)>(
    &::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28f492c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>&
GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__cordl_internal_get__variants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variants;
}
constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> const&
GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__cordl_internal_get__variants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variants;
}
constexpr void GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__cordl_internal_set__variants(
    ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____variants)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__cordl_internal_get__shader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__cordl_internal_get__shader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shader;
}
constexpr void GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__cordl_internal_set__shader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>
GlobalNamespace::__ShaderVariantsSO__ShaderVariant::get_variants() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>::get(),
                                                                             "get_variants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>, false>(
      this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> GlobalNamespace::__ShaderVariantsSO__ShaderVariant::get_shader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>::get(),
                                                                             "get_shader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant* GlobalNamespace::__ShaderVariantsSO__ShaderVariant::New_ctor(
    ::UnityEngine::Shader* shader, ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> variants) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>(shader, variants));
}
inline void GlobalNamespace::__ShaderVariantsSO__ShaderVariant::_ctor(
    ::UnityEngine::Shader* shader, ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> variants) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shader, variants);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__ShaderVariantsSO__ShaderVariant() {}
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO.get_shaderVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> (::GlobalNamespace::ShaderVariantsSO::*)()>(
        &::GlobalNamespace::ShaderVariantsSO::get_shaderVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28f4904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO*>::get(),
                                                                               "get_shaderVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShaderVariantsSO::*)(
    ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>)>(&::GlobalNamespace::ShaderVariantsSO::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28f490c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShaderVariantsSO::*)()>(&::GlobalNamespace::ShaderVariantsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28f4914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>&
GlobalNamespace::ShaderVariantsSO::__cordl_internal_get__shaderVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderVariants;
}
constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> const&
GlobalNamespace::ShaderVariantsSO::__cordl_internal_get__shaderVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderVariants;
}
constexpr void GlobalNamespace::ShaderVariantsSO::__cordl_internal_set__shaderVariants(
    ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shaderVariants)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> GlobalNamespace::ShaderVariantsSO::get_shaderVariants() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO*>::get(), "get_shaderVariants",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>, false>(
      this, ___internal_method);
}
inline void GlobalNamespace::ShaderVariantsSO::Init(::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> shaderVariants) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                   ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shaderVariants);
}
inline ::GlobalNamespace::ShaderVariantsSO* GlobalNamespace::ShaderVariantsSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ShaderVariantsSO*>());
}
inline void GlobalNamespace::ShaderVariantsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderVariantsSO::ShaderVariantsSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
