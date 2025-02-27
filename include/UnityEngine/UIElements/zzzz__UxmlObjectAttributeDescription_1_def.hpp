#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectAttributeDescription_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UxmlObjectAttributeDescription_1)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class UxmlObjectAttributeDescription_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UxmlObjectAttributeDescription_1);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlObjectAttributeDescription`1<T>
class CORDL_TYPE UxmlObjectAttributeDescription_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <defaultValue>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValue_k__BackingField, put = __cordl_internal_set__defaultValue_k__BackingField)) T _defaultValue_k__BackingField;

  __declspec(property(get = get_defaultValue)) T defaultValue;

  /// @brief Method GetValueFromBag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>* New_ctor();

  constexpr T const& __cordl_internal_get__defaultValue_k__BackingField() const;

  constexpr T& __cordl_internal_get__defaultValue_k__BackingField();

  constexpr void __cordl_internal_set__defaultValue_k__BackingField(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_defaultValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_defaultValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlObjectAttributeDescription_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectAttributeDescription_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlObjectAttributeDescription_1(UxmlObjectAttributeDescription_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectAttributeDescription_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlObjectAttributeDescription_1(UxmlObjectAttributeDescription_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6268 };

  /// @brief Field <defaultValue>k__BackingField, offset: 0x10, size: 0x8, def value: None
  T ____defaultValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlObjectAttributeDescription_1, "UnityEngine.UIElements", "UxmlObjectAttributeDescription`1");
