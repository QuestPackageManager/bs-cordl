#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EnumFieldHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnumFieldHelpers)
namespace System {
class Enum;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
template <typename TBase> class UxmlTypeAttributeDescription_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EnumFieldHelpers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EnumFieldHelpers);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EnumFieldHelpers
class CORDL_TYPE EnumFieldHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Field includeObsoleteValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_includeObsoleteValues, put = setStaticF_includeObsoleteValues)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* includeObsoleteValues;

  /// @brief Field type, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_type, put = setStaticF_type)) ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* type;

  /// @brief Field value, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_value, put = setStaticF_value)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* value;

  /// @brief Method ExtractValue, addr 0x49969e4, size 0x378, virtual false, abstract: false, final false
  static inline bool ExtractValue(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc, ::ByRef<::System::Type*> resEnumType,
                                  ::ByRef<::System::Enum*> resEnumValue, ::ByRef<bool> resIncludeObsoleteValues);

  static inline ::UnityEngine::UIElements::UxmlBoolAttributeDescription* getStaticF_includeObsoleteValues();

  static inline ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* getStaticF_type();

  static inline ::UnityEngine::UIElements::UxmlStringAttributeDescription* getStaticF_value();

  static inline void setStaticF_includeObsoleteValues(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  static inline void setStaticF_type(::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* value);

  static inline void setStaticF_value(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumFieldHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumFieldHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumFieldHelpers(EnumFieldHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumFieldHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumFieldHelpers(EnumFieldHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5571 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EnumFieldHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EnumFieldHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EnumFieldHelpers*, "UnityEngine.UIElements", "EnumFieldHelpers");
