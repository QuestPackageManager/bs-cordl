#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesignOnlyAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DesignOnlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DesignOnlyAttribute);
// Type: System.ComponentModel::DesignOnlyAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::DesignOnlyAttribute*
class CORDL_TYPE DesignOnlyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::DesignOnlyAttribute* Default;

  __declspec(property(get = get_IsDesignOnly)) bool IsDesignOnly;

  /// @brief Field No, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_No, put = setStaticF_No))::System::ComponentModel::DesignOnlyAttribute* No;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes))::System::ComponentModel::DesignOnlyAttribute* Yes;

  /// @brief Field <IsDesignOnly>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDesignOnly_k__BackingField, put = __cordl_internal_set__IsDesignOnly_k__BackingField)) bool _IsDesignOnly_k__BackingField;

  /// @brief Method Equals, addr 0x29edef8, size 0xe4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x29edfdc, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x29edffc, size 0x80, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::DesignOnlyAttribute* New_ctor(bool isDesignOnly);

  constexpr bool const& __cordl_internal_get__IsDesignOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDesignOnly_k__BackingField();

  constexpr void __cordl_internal_set__IsDesignOnly_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x29edec8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool isDesignOnly);

  static inline ::System::ComponentModel::DesignOnlyAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::DesignOnlyAttribute* getStaticF_No();

  static inline ::System::ComponentModel::DesignOnlyAttribute* getStaticF_Yes();

  /// @brief Method get_IsDesignOnly, addr 0x29edef0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDesignOnly();

  static inline void setStaticF_Default(::System::ComponentModel::DesignOnlyAttribute* value);

  static inline void setStaticF_No(::System::ComponentModel::DesignOnlyAttribute* value);

  static inline void setStaticF_Yes(::System::ComponentModel::DesignOnlyAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignOnlyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesignOnlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesignOnlyAttribute(DesignOnlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesignOnlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesignOnlyAttribute(DesignOnlyAttribute const&) = delete;

  /// @brief Field <IsDesignOnly>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IsDesignOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DesignOnlyAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DesignOnlyAttribute, ____IsDesignOnly_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DesignOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignOnlyAttribute*, "System.ComponentModel", "DesignOnlyAttribute");
