#pragma once
// IWYU pragma private; include "HMUI/EmptyBoxGraphic.hpp"
#include "UnityEngine/UI/zzzz__Graphic_impl.hpp"
#include "HMUI/zzzz__EmptyBoxGraphic_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
//  Writing Method size for method: ::HMUI::EmptyBoxGraphic.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::EmptyBoxGraphic::*)(::UnityEngine::UI::VertexHelper*)>(&::HMUI::EmptyBoxGraphic::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x39eead8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::EmptyBoxGraphic.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::EmptyBoxGraphic::*)()>(&::HMUI::EmptyBoxGraphic::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x39eed6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(), "OnDrawGizmosSelected",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::EmptyBoxGraphic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::EmptyBoxGraphic::*)()>(&::HMUI::EmptyBoxGraphic::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x39eee90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::EmptyBoxGraphic::__cordl_internal_get__depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depth;
}
constexpr float_t const& HMUI::EmptyBoxGraphic::__cordl_internal_get__depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depth;
}
constexpr void HMUI::EmptyBoxGraphic::__cordl_internal_set__depth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____depth = value;
}
inline void HMUI::EmptyBoxGraphic::OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vh);
}
inline void HMUI::EmptyBoxGraphic::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(), "OnDrawGizmosSelected",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::EmptyBoxGraphic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::EmptyBoxGraphic* HMUI::EmptyBoxGraphic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::EmptyBoxGraphic*>());
}
// Ctor Parameters []
constexpr ::HMUI::EmptyBoxGraphic::EmptyBoxGraphic() {}
