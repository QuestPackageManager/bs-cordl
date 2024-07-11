#pragma once
// IWYU pragma private; include "UnityEngine/UI/BaseVertexEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseVertexEffect)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct UIVertex;
}
// Forward declare root types
namespace UnityEngine::UI {
class BaseVertexEffect;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::BaseVertexEffect);
// Type: UnityEngine.UI::BaseVertexEffect
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::BaseVertexEffect*
class CORDL_TYPE BaseVertexEffect : public ::System::Object {
public:
  // Declarations
  /// @brief Method ModifyVertices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ModifyVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vertices);

  static inline ::UnityEngine::UI::BaseVertexEffect* New_ctor();

  /// @brief Method .ctor, addr 0x3522734, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseVertexEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseVertexEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseVertexEffect(BaseVertexEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseVertexEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseVertexEffect(BaseVertexEffect const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::BaseVertexEffect, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::BaseVertexEffect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::BaseVertexEffect*, "UnityEngine.UI", "BaseVertexEffect");
