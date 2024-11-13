#pragma once
// IWYU pragma private; include "Unity/Properties/ContainerPropertyBag_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ContainerPropertyBag_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Properties {
template <typename TContainer> class IProperty_1;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer> class ContainerPropertyBag_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::ContainerPropertyBag_1);
// Type: Unity.Properties::ContainerPropertyBag`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: false
// CS Name: ::Unity.Properties::ContainerPropertyBag`1<TContainer>*
class CORDL_TYPE ContainerPropertyBag_1 : public ::Unity::Properties::PropertyBag_1<TContainer> {
public:
  // Declarations
  /// @brief Field m_PropertiesHash, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PropertiesHash,
                      put = __cordl_internal_set_m_PropertiesHash)) ::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Properties::IProperty_1<TContainer>*>* m_PropertiesHash;

  /// @brief Field m_PropertiesList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PropertiesList,
                      put = __cordl_internal_set_m_PropertiesList)) ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>* m_PropertiesList;

  /// @brief Method AddProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline void AddProperty(::Unity::Properties::Property_2<TContainer, TValue>* property);

  static inline ::Unity::Properties::ContainerPropertyBag_1<TContainer>* New_ctor();

  /// @brief Method TryGetProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryGetProperty(ByRef<TContainer> container, ::StringW name, ByRef<::Unity::Properties::IProperty_1<TContainer>*> property);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Properties::IProperty_1<TContainer>*>*& __cordl_internal_get_m_PropertiesHash();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Properties::IProperty_1<TContainer>*>*> const&
  __cordl_internal_get_m_PropertiesHash() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*& __cordl_internal_get_m_PropertiesList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*> const& __cordl_internal_get_m_PropertiesList() const;

  constexpr void __cordl_internal_set_m_PropertiesHash(::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Properties::IProperty_1<TContainer>*>* value);

  constexpr void __cordl_internal_set_m_PropertiesList(::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContainerPropertyBag_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContainerPropertyBag_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContainerPropertyBag_1(ContainerPropertyBag_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContainerPropertyBag_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContainerPropertyBag_1(ContainerPropertyBag_1 const&) = delete;

  /// @brief Field m_PropertiesList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>* ___m_PropertiesList;

  /// @brief Field m_PropertiesHash, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Properties::IProperty_1<TContainer>*>* ___m_PropertiesHash;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17408 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::ContainerPropertyBag_1, "Unity.Properties", "ContainerPropertyBag`1");
