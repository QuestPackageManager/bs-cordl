#pragma once
// IWYU pragma private; include "Unity/Properties/Property_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/Internal/zzzz__IAttributes_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__IProperty_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Property_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Attribute;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::Property_2);
// Dependencies System.Object, Unity.Properties.IProperty, Unity.Properties.IProperty`1<TContainer>, Unity.Properties.Internal.IAttributes
namespace Unity::Properties {
// cpp template
template <typename TContainer, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.Property`2<TContainer,TValue>
class CORDL_TYPE Property_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field m_Attributes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Attributes, put = __cordl_internal_set_m_Attributes)) ::System::Collections::Generic::List_1<::System::Attribute*>* m_Attributes;

  /// @brief Convert operator to "::Unity::Properties::IProperty"
  constexpr operator ::Unity::Properties::IProperty*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IProperty_1<TContainer>"
  constexpr operator ::Unity::Properties::IProperty_1<TContainer>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::Internal::IAttributes"
  constexpr operator ::Unity::Properties::Internal::IAttributes*() noexcept;

  /// @brief Method AddAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddAttribute(::System::Attribute* attribute);

  /// @brief Method AddAttributes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddAttributes(::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* attributes);

  /// @brief Method DeclaredValueType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* DeclaredValueType();

  /// @brief Method HasAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TAttribute> inline bool HasAttribute();

  static inline ::Unity::Properties::Property_2<TContainer, TValue>* New_ctor();

  /// @brief Method Unity.Properties.Internal.IAttributes.AddAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unity_Properties_Internal_IAttributes_AddAttribute(::System::Attribute* attribute);

  /// @brief Method Unity.Properties.Internal.IAttributes.AddAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unity_Properties_Internal_IAttributes_AddAttributes(::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* attributes);

  constexpr ::System::Collections::Generic::List_1<::System::Attribute*>* const& __cordl_internal_get_m_Attributes() const;

  constexpr ::System::Collections::Generic::List_1<::System::Attribute*>*& __cordl_internal_get_m_Attributes();

  constexpr void __cordl_internal_set_m_Attributes(::System::Collections::Generic::List_1<::System::Attribute*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Convert to "::Unity::Properties::IProperty"
  constexpr ::Unity::Properties::IProperty* i___Unity__Properties__IProperty() noexcept;

  /// @brief Convert to "::Unity::Properties::IProperty_1<TContainer>"
  constexpr ::Unity::Properties::IProperty_1<TContainer>* i___Unity__Properties__IProperty_1_TContainer_() noexcept;

  /// @brief Convert to "::Unity::Properties::Internal::IAttributes"
  constexpr ::Unity::Properties::Internal::IAttributes* i___Unity__Properties__Internal__IAttributes() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Property_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Property_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Property_2(Property_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Property_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Property_2(Property_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17454 };

  /// @brief Field m_Attributes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Attribute*>* ___m_Attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::Property_2, "Unity.Properties", "Property`2");
