#pragma once
// IWYU pragma private; include "Unity/Properties/SetPropertyBagBase_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SetPropertyBagBase_2)
namespace Unity::Properties {
template <typename TSet, typename TElement> class SetPropertyBagBase_2_SetElementProperty;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TSet, typename TElement> class SetPropertyBagBase_2;
}
namespace Unity::Properties {
template <typename TSet, typename TElement> class SetPropertyBagBase_2_SetElementProperty;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::SetPropertyBagBase_2);
MARK_GEN_REF_PTR_T(::Unity::Properties::SetPropertyBagBase_2_SetElementProperty);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>
namespace Unity::Properties {
// cpp template
template <typename TSet, typename TElement>
// Is value type: false
// CS Name: Unity.Properties.SetPropertyBagBase`2/SetElementProperty<TSet,TElement>
class CORDL_TYPE SetPropertyBagBase_2_SetElementProperty : public ::Unity::Properties::Property_2<TSet, TElement> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field m_Value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) TElement m_Value;

  static inline ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* New_ctor();

  constexpr TElement const& __cordl_internal_get_m_Value() const;

  constexpr TElement& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_Value(TElement value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetPropertyBagBase_2_SetElementProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyBagBase_2_SetElementProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetPropertyBagBase_2_SetElementProperty(SetPropertyBagBase_2_SetElementProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyBagBase_2_SetElementProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetPropertyBagBase_2_SetElementProperty(SetPropertyBagBase_2_SetElementProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17470 };

  /// @brief Field m_Value, offset: 0x18, size: 0x8, def value: None
  TElement ___m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies Unity.Properties.IPropertyBag, Unity.Properties.IPropertyBag`1<TContainer>, Unity.Properties.PropertyBag`1<TContainer>
namespace Unity::Properties {
// cpp template
template <typename TSet, typename TElement>
// Is value type: false
// CS Name: Unity.Properties.SetPropertyBagBase`2<TSet,TElement>
class CORDL_TYPE SetPropertyBagBase_2 : public ::Unity::Properties::PropertyBag_1<TSet> {
public:
  // Declarations
  using SetElementProperty = ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>;

  /// @brief Field m_Property, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property, put = __cordl_internal_set_m_Property)) ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* m_Property;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag"
  constexpr operator ::Unity::Properties::IPropertyBag*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TSet>"
  constexpr operator ::Unity::Properties::IPropertyBag_1<TSet>*() noexcept;

  static inline ::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>* New_ctor();

  constexpr ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* const& __cordl_internal_get_m_Property() const;

  constexpr ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*& __cordl_internal_get_m_Property();

  constexpr void __cordl_internal_set_m_Property(::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::IPropertyBag"
  constexpr ::Unity::Properties::IPropertyBag* i___Unity__Properties__IPropertyBag() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag_1<TSet>"
  constexpr ::Unity::Properties::IPropertyBag_1<TSet>* i___Unity__Properties__IPropertyBag_1_TSet_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetPropertyBagBase_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyBagBase_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetPropertyBagBase_2(SetPropertyBagBase_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyBagBase_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetPropertyBagBase_2(SetPropertyBagBase_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17471 };

  /// @brief Field m_Property, offset: 0x18, size: 0x8, def value: None
  ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* ___m_Property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::SetPropertyBagBase_2, "Unity.Properties", "SetPropertyBagBase`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::SetPropertyBagBase_2_SetElementProperty, "Unity.Properties", "SetPropertyBagBase`2/SetElementProperty");
