#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/IAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAttributes)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Attribute;
}
namespace Unity::Properties {
struct AttributesScope;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class IAttributes;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::IAttributes);
// Dependencies
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.IAttributes
class CORDL_TYPE IAttributes {
public:
  // Declarations
  __declspec(property(get = get_Attributes, put = set_Attributes)) ::System::Collections::Generic::List_1<::System::Attribute*>* Attributes;

  /// @brief Method AddAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddAttribute(::System::Attribute* attribute);

  /// @brief Method AddAttributes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddAttributes(::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* attributes);

  /// @brief Method CreateAttributesScope, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::AttributesScope CreateAttributesScope(::Unity::Properties::Internal::IAttributes* attributes);

  /// @brief Method get_Attributes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Attribute*>* get_Attributes();

  /// @brief Method set_Attributes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Attributes(::System::Collections::Generic::List_1<::System::Attribute*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IAttributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAttributes(IAttributes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19429 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::IAttributes);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::IAttributes*, "Unity.Properties.Internal", "IAttributes");
