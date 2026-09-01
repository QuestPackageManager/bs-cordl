#pragma once
// IWYU pragma private; include "UnityEngine\UI\IVertexModifier.hpp"
#include "UnityEngine/UI/zzzz__IVertexModifier_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::IVertexModifier.ModifyVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::IVertexModifier::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*)>(
    &::UnityEngine::UI::IVertexModifier::ModifyVertices)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::IVertexModifier*>(), { ::i2c::class_of<::UnityEngine::UI::IVertexModifier*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::IVertexModifier::ModifyVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::IVertexModifier*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verts);
}
