#pragma once
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Extents_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Extents.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::Text::Extents::*)()>(&::UnityEngine::TextCore::Text::Extents::ToString)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x328e034;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::Extents>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::Extents>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::TextCore::Text::Extents::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::Extents>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::Extents::Extents(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) noexcept {
  this->min = min;
  this->max = max;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::Extents::Extents() {}
