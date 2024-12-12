#pragma once
// IWYU pragma private; include "Unity/Properties/KeyValueCollectionPropertyBag_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyValueCollectionPropertyBag_3)
namespace Unity::Properties {
template <typename TDictionary, typename TKey, typename TValue> class KeyValueCollectionPropertyBag_3_KeyValuePairProperty;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TDictionary, typename TKey, typename TValue> class KeyValueCollectionPropertyBag_3;
}
namespace Unity::Properties {
template <typename TDictionary, typename TKey, typename TValue> class KeyValueCollectionPropertyBag_3_KeyValuePairProperty;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::KeyValueCollectionPropertyBag_3);
MARK_GEN_REF_PTR_T(::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty);
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>, Unity.Properties.Property`2<TContainer, TValue>
namespace Unity::Properties {
// cpp template
template <typename TDictionary, typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.KeyValueCollectionPropertyBag`3/KeyValuePairProperty<TDictionary,TKey,TValue>
class CORDL_TYPE KeyValueCollectionPropertyBag_3_KeyValuePairProperty : public ::Unity::Properties::Property_2<TDictionary, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> {
public:
  // Declarations
  __declspec(property(get = get_Key)) TKey Key;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <Key>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField)) TKey _Key_k__BackingField;

  static inline ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* New_ctor();

  constexpr TKey const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr TKey& __cordl_internal_get__Key_k__BackingField();

  constexpr void __cordl_internal_set__Key_k__BackingField(TKey value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TKey get_Key();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValueCollectionPropertyBag_3_KeyValuePairProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyValueCollectionPropertyBag_3_KeyValuePairProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValueCollectionPropertyBag_3_KeyValuePairProperty(KeyValueCollectionPropertyBag_3_KeyValuePairProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValueCollectionPropertyBag_3_KeyValuePairProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValueCollectionPropertyBag_3_KeyValuePairProperty(KeyValueCollectionPropertyBag_3_KeyValuePairProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17459 };

  /// @brief Field <Key>k__BackingField, offset: 0x18, size: 0x8, def value: None
  TKey ____Key_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies Unity.Properties.IPropertyBag, Unity.Properties.IPropertyBag`1<TContainer>, Unity.Properties.PropertyBag`1<TContainer>
namespace Unity::Properties {
// cpp template
template <typename TDictionary, typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.KeyValueCollectionPropertyBag`3<TDictionary,TKey,TValue>
class CORDL_TYPE KeyValueCollectionPropertyBag_3 : public ::Unity::Properties::PropertyBag_1<TDictionary> {
public:
  // Declarations
  using KeyValuePairProperty = ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>;

  /// @brief Field m_KeyValuePairProperty, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KeyValuePairProperty,
                      put = __cordl_internal_set_m_KeyValuePairProperty)) ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* m_KeyValuePairProperty;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag"
  constexpr operator ::Unity::Properties::IPropertyBag*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TDictionary>"
  constexpr operator ::Unity::Properties::IPropertyBag_1<TDictionary>*() noexcept;

  static inline ::Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>* New_ctor();

  constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* const& __cordl_internal_get_m_KeyValuePairProperty() const;

  constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*& __cordl_internal_get_m_KeyValuePairProperty();

  constexpr void __cordl_internal_set_m_KeyValuePairProperty(::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::IPropertyBag"
  constexpr ::Unity::Properties::IPropertyBag* i___Unity__Properties__IPropertyBag() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag_1<TDictionary>"
  constexpr ::Unity::Properties::IPropertyBag_1<TDictionary>* i___Unity__Properties__IPropertyBag_1_TDictionary_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValueCollectionPropertyBag_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyValueCollectionPropertyBag_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValueCollectionPropertyBag_3(KeyValueCollectionPropertyBag_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValueCollectionPropertyBag_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValueCollectionPropertyBag_3(KeyValueCollectionPropertyBag_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17460 };

  /// @brief Field m_KeyValuePairProperty, offset: 0x18, size: 0x8, def value: None
  ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* ___m_KeyValuePairProperty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::KeyValueCollectionPropertyBag_3, "Unity.Properties", "KeyValueCollectionPropertyBag`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty, "Unity.Properties", "KeyValueCollectionPropertyBag`3/KeyValuePairProperty");
