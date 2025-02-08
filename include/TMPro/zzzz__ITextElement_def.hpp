#pragma once
// IWYU pragma private; include "TMPro/ITextElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITextElement)
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace TMPro {
class ITextElement;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::ITextElement);
// Dependencies
namespace TMPro {
// Is value type: false
// CS Name: TMPro.ITextElement
class CORDL_TYPE ITextElement {
public:
  // Declarations
  __declspec(property(get = get_sharedMaterial)) ::UnityW<::UnityEngine::Material> sharedMaterial;

  /// @brief Method GetInstanceID, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetInstanceID();

  /// @brief Method Rebuild, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method get_sharedMaterial, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_sharedMaterial();

  // Ctor Parameters [CppParam { name: "", ty: "ITextElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITextElement(ITextElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14549 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
NEED_NO_BOX(::TMPro::ITextElement);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ITextElement*, "TMPro", "ITextElement");
