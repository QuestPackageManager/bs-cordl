#pragma once
// IWYU pragma private; include "Unity/Properties/DelegateProperty_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DelegateProperty_2)
namespace Unity::Properties {
template <typename TContainer, typename TValue> class PropertyGetter_2;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class PropertySetter_2;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer, typename TValue> class DelegateProperty_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::DelegateProperty_2);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>
namespace Unity::Properties {
// cpp template
template <typename TContainer, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.DelegateProperty`2<TContainer,TValue>
class CORDL_TYPE DelegateProperty_2 : public ::Unity::Properties::Property_2<TContainer, TValue> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <Name>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Field m_Getter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Getter, put = __cordl_internal_set_m_Getter)) ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* m_Getter;

  /// @brief Field m_Setter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Setter, put = __cordl_internal_set_m_Setter)) ::Unity::Properties::PropertySetter_2<TContainer, TValue>* m_Setter;

  static inline ::Unity::Properties::DelegateProperty_2<TContainer, TValue>* New_ctor(::StringW name, ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* getter,
                                                                                      ::Unity::Properties::PropertySetter_2<TContainer, TValue>* setter);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* const& __cordl_internal_get_m_Getter() const;

  constexpr ::Unity::Properties::PropertyGetter_2<TContainer, TValue>*& __cordl_internal_get_m_Getter();

  constexpr ::Unity::Properties::PropertySetter_2<TContainer, TValue>* const& __cordl_internal_get_m_Setter() const;

  constexpr ::Unity::Properties::PropertySetter_2<TContainer, TValue>*& __cordl_internal_get_m_Setter();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_m_Getter(::Unity::Properties::PropertyGetter_2<TContainer, TValue>* value);

  constexpr void __cordl_internal_set_m_Setter(::Unity::Properties::PropertySetter_2<TContainer, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* getter, ::Unity::Properties::PropertySetter_2<TContainer, TValue>* setter);

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateProperty_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegateProperty_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateProperty_2(DelegateProperty_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateProperty_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateProperty_2(DelegateProperty_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17443 };

  /// @brief Field m_Getter, offset: 0x18, size: 0x8, def value: None
  ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* ___m_Getter;

  /// @brief Field m_Setter, offset: 0x20, size: 0x8, def value: None
  ::Unity::Properties::PropertySetter_2<TContainer, TValue>* ___m_Setter;

  /// @brief Field <Name>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::DelegateProperty_2, "Unity.Properties", "DelegateProperty`2");
