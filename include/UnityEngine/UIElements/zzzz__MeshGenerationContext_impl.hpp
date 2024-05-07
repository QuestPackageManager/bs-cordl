#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePainter_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags::__MeshGenerationContext__MeshFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags::__MeshGenerationContext__MeshFlags() {}
constexpr ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags UnityEngine::UIElements::__MeshGenerationContext__MeshFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags UnityEngine::UIElements::__MeshGenerationContext__MeshFlags::UVisDisplacement{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags UnityEngine::UIElements::__MeshGenerationContext__MeshFlags::SkipDynamicAtlas{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MeshGenerationContext::*)(::UnityEngine::UIElements::IStylePainter*)>(
    &::UnityEngine::UIElements::MeshGenerationContext::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x35d122c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IStylePainter*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::IStylePainter*& UnityEngine::UIElements::MeshGenerationContext::__cordl_internal_get_painter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___painter;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IStylePainter*> const& UnityEngine::UIElements::MeshGenerationContext::__cordl_internal_get_painter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___painter;
}
constexpr void UnityEngine::UIElements::MeshGenerationContext::__cordl_internal_set_painter(::UnityEngine::UIElements::IStylePainter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___painter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::MeshGenerationContext* UnityEngine::UIElements::MeshGenerationContext::New_ctor(::UnityEngine::UIElements::IStylePainter* painter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::MeshGenerationContext*>(painter));
}
inline void UnityEngine::UIElements::MeshGenerationContext::_ctor(::UnityEngine::UIElements::IStylePainter* painter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IStylePainter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, painter);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshGenerationContext::MeshGenerationContext() {}
