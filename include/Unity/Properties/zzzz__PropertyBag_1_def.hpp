#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyBag_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/Internal/zzzz__IPropertyBagRegister_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_1_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_def.hpp"
CORDL_MODULE_EXPORT(PropertyBag_1)
namespace Unity::Properties {
class ITypeVisitor;
}
namespace Unity::Properties {
struct InstantiationKind;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer> class PropertyBag_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::PropertyBag_1);
// Dependencies System.Object, Unity.Properties.IConstructor, Unity.Properties.IConstructor`1<T>, Unity.Properties.IPropertyBag, Unity.Properties.IPropertyBag`1<TContainer>,
// Unity.Properties.InstantiationKind, Unity.Properties.Internal.IPropertyBagRegister
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: false
// CS Name: Unity.Properties.PropertyBag`1<TContainer>
class CORDL_TYPE PropertyBag_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_InstantiationKind)) ::Unity::Properties::InstantiationKind InstantiationKind;

  __declspec(property(get = Unity_Properties_IConstructor_get_InstantiationKind)) ::Unity::Properties::InstantiationKind Unity_Properties_IConstructor_InstantiationKind;

  /// @brief Field <InstantiationKind>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__InstantiationKind_k__BackingField,
                      put = __cordl_internal_set__InstantiationKind_k__BackingField)) ::Unity::Properties::InstantiationKind _InstantiationKind_k__BackingField;

  /// @brief Convert operator to "::Unity::Properties::IConstructor"
  constexpr operator ::Unity::Properties::IConstructor*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IConstructor_1<TContainer>"
  constexpr operator ::Unity::Properties::IConstructor_1<TContainer>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag"
  constexpr operator ::Unity::Properties::IPropertyBag*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TContainer>"
  constexpr operator ::Unity::Properties::IPropertyBag_1<TContainer>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::Internal::IPropertyBagRegister"
  constexpr operator ::Unity::Properties::Internal::IPropertyBagRegister*() noexcept;

  /// @brief Method Accept, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Accept(::Unity::Properties::ITypeVisitor* visitor);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TContainer Instantiate();

  static inline ::Unity::Properties::PropertyBag_1<TContainer>* New_ctor();

  /// @brief Method Unity.Properties.IConstructor<TContainer>.Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TContainer Unity_Properties_IConstructor_TContainer__Instantiate();

  /// @brief Method Unity.Properties.IConstructor.get_InstantiationKind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Properties::InstantiationKind Unity_Properties_IConstructor_get_InstantiationKind();

  /// @brief Method Unity.Properties.Internal.IPropertyBagRegister.Register, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unity_Properties_Internal_IPropertyBagRegister_Register();

  constexpr ::Unity::Properties::InstantiationKind const& __cordl_internal_get__InstantiationKind_k__BackingField() const;

  constexpr ::Unity::Properties::InstantiationKind& __cordl_internal_get__InstantiationKind_k__BackingField();

  constexpr void __cordl_internal_set__InstantiationKind_k__BackingField(::Unity::Properties::InstantiationKind value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InstantiationKind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::InstantiationKind get_InstantiationKind();

  /// @brief Convert to "::Unity::Properties::IConstructor"
  constexpr ::Unity::Properties::IConstructor* i___Unity__Properties__IConstructor() noexcept;

  /// @brief Convert to "::Unity::Properties::IConstructor_1<TContainer>"
  constexpr ::Unity::Properties::IConstructor_1<TContainer>* i___Unity__Properties__IConstructor_1_TContainer_() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag"
  constexpr ::Unity::Properties::IPropertyBag* i___Unity__Properties__IPropertyBag() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag_1<TContainer>"
  constexpr ::Unity::Properties::IPropertyBag_1<TContainer>* i___Unity__Properties__IPropertyBag_1_TContainer_() noexcept;

  /// @brief Convert to "::Unity::Properties::Internal::IPropertyBagRegister"
  constexpr ::Unity::Properties::Internal::IPropertyBagRegister* i___Unity__Properties__Internal__IPropertyBagRegister() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_1(PropertyBag_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_1(PropertyBag_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17475 };

  /// @brief Field <InstantiationKind>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::Unity::Properties::InstantiationKind ____InstantiationKind_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::PropertyBag_1, "Unity.Properties", "PropertyBag`1");
