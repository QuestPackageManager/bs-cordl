#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlTypeAttributeDescription_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlTypeAttributeDescription_1)
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TBase> class UxmlTypeAttributeDescription_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UxmlTypeAttributeDescription_1);
// Type: UnityEngine.UIElements::UxmlTypeAttributeDescription`1
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TBase>
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UxmlTypeAttributeDescription`1<TBase>*
class CORDL_TYPE UxmlTypeAttributeDescription_1 : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Type*> {
public:
  // Declarations
  /// @brief Method ConvertValueToType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Type* ConvertValueToType(::StringW v, ::System::Type* defaultValue);

  /// @brief Method GetValueFromBag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Type* _GetValueFromBag_b__3_0(::StringW s, ::System::Type* type1);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlTypeAttributeDescription_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlTypeAttributeDescription_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlTypeAttributeDescription_1(UxmlTypeAttributeDescription_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlTypeAttributeDescription_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlTypeAttributeDescription_1(UxmlTypeAttributeDescription_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6228 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlTypeAttributeDescription_1, "UnityEngine.UIElements", "UxmlTypeAttributeDescription`1");
