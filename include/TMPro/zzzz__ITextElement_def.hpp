#pragma once
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
// Type: TMPro::ITextElement
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12326))
// CS Name: ::TMPro::ITextElement*
class CORDL_TYPE ITextElement {
public:
  // Declarations
  __declspec(property(get = get_sharedMaterial))::UnityW<::UnityEngine::Material> sharedMaterial;

  /// @brief Method get_sharedMaterial, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::Material> get_sharedMaterial();

  /// @brief Method Rebuild, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method GetInstanceID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetInstanceID();

  // Ctor Parameters [CppParam { name: "", ty: "ITextElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITextElement(ITextElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITextElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITextElement(ITextElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
NEED_NO_BOX(::TMPro::ITextElement);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ITextElement*, "TMPro", "ITextElement");
