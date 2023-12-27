#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStyleValue_1)
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::IStyleValue_1);
// Type: UnityEngine.UIElements::IStyleValue`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7299))
// CS Name: ::UnityEngine.UIElements::IStyleValue`1<T>*
class CORDL_TYPE IStyleValue_1 {
public:
  // Declarations
  __declspec(property(get = get_value)) T value;

  __declspec(property(get = get_keyword))::UnityEngine::UIElements::StyleKeyword keyword;

  /// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
  inline T get_value();

  /// @brief Method get_keyword addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  // Ctor Parameters [CppParam { name: "", ty: "IStyleValue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStyleValue_1(IStyleValue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStyleValue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStyleValue_1(IStyleValue_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::IStyleValue_1, "UnityEngine.UIElements", "IStyleValue`1");
