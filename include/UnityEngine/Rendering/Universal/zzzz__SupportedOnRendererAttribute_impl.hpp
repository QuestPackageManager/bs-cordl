#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/SupportedOnRendererAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SupportedOnRendererAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute.get_rendererTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (
    ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::*)()>(&::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::get_rendererTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6706ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>::get(), "get_rendererTypes",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::*)(::System::Type*)>(
    &::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6706ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::*)(
    ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6706b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::__cordl_internal_get__rendererTypes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererTypes_k__BackingField;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::__cordl_internal_get__rendererTypes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererTypes_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::__cordl_internal_set__rendererTypes_k__BackingField(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rendererTypes_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::get_rendererTypes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>::get(), "get_rendererTypes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::_ctor(::System::Type* renderer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer);
}
inline void UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> renderers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderers);
}
inline ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute* UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::New_ctor(::System::Type* renderer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>(renderer));
}
inline ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*
UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::New_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> renderers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>(renderers));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::SupportedOnRendererAttribute() {}
