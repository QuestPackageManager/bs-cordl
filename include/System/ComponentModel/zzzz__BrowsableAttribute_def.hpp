#pragma once
// IWYU pragma private; include "System/ComponentModel/BrowsableAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BrowsableAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class BrowsableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::BrowsableAttribute);
// Type: System.ComponentModel::BrowsableAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::BrowsableAttribute*
class CORDL_TYPE BrowsableAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Browsable)) bool Browsable;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::System::ComponentModel::BrowsableAttribute* Default;

  /// @brief Field No, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_No, put = setStaticF_No)) ::System::ComponentModel::BrowsableAttribute* No;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes)) ::System::ComponentModel::BrowsableAttribute* Yes;

  /// @brief Field <Browsable>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Browsable_k__BackingField, put = __cordl_internal_set__Browsable_k__BackingField)) bool _Browsable_k__BackingField;

  /// @brief Method Equals, addr 0x43cf578, size 0xe4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x43cf65c, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x43cf6c8, size 0x68, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::BrowsableAttribute* New_ctor(bool browsable);

  constexpr bool const& __cordl_internal_get__Browsable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Browsable_k__BackingField();

  constexpr void __cordl_internal_set__Browsable_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x43cf548, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool browsable);

  static inline ::System::ComponentModel::BrowsableAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::BrowsableAttribute* getStaticF_No();

  static inline ::System::ComponentModel::BrowsableAttribute* getStaticF_Yes();

  /// @brief Method get_Browsable, addr 0x43cf570, size 0x8, virtual false, abstract: false, final false
  inline bool get_Browsable();

  static inline void setStaticF_Default(::System::ComponentModel::BrowsableAttribute* value);

  static inline void setStaticF_No(::System::ComponentModel::BrowsableAttribute* value);

  static inline void setStaticF_Yes(::System::ComponentModel::BrowsableAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BrowsableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BrowsableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BrowsableAttribute(BrowsableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BrowsableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BrowsableAttribute(BrowsableAttribute const&) = delete;

  /// @brief Field <Browsable>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Browsable_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9307 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::BrowsableAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::BrowsableAttribute, ____Browsable_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::BrowsableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::BrowsableAttribute*, "System.ComponentModel", "BrowsableAttribute");
