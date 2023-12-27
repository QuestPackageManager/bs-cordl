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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9389))
// CS Name: ::System.ComponentModel::DesignOnlyAttribute*
class CORDL_TYPE DesignOnlyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <IsDesignOnly>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__IsDesignOnly_k__BackingField, put = __set__IsDesignOnly_k__BackingField)) bool _IsDesignOnly_k__BackingField;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes))::System::ComponentModel::DesignOnlyAttribute* Yes;

  /// @brief Field No, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_No, put = setStaticF_No))::System::ComponentModel::DesignOnlyAttribute* No;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::DesignOnlyAttribute* Default;

  __declspec(property(get = get_IsDesignOnly)) bool IsDesignOnly;

  constexpr bool& __get__IsDesignOnly_k__BackingField();

  constexpr bool const& __get__IsDesignOnly_k__BackingField() const;

  constexpr void __set__IsDesignOnly_k__BackingField(bool value);

  static inline void setStaticF_Yes(::System::ComponentModel::DesignOnlyAttribute* value);

  static inline ::System::ComponentModel::DesignOnlyAttribute* getStaticF_Yes();

  static inline void setStaticF_No(::System::ComponentModel::DesignOnlyAttribute* value);

  static inline ::System::ComponentModel::DesignOnlyAttribute* getStaticF_No();

  static inline void setStaticF_Default(::System::ComponentModel::DesignOnlyAttribute* value);

  static inline ::System::ComponentModel::DesignOnlyAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::DesignOnlyAttribute* New_ctor(bool isDesignOnly);

  /// @brief Method .ctor addr 0x29043e4 size 0x28 virtual false final false
  inline void _ctor(bool isDesignOnly);

  /// @brief Method get_IsDesignOnly addr 0x290440c size 0x8 virtual false final false
  inline bool get_IsDesignOnly();

  /// @brief Method Equals addr 0x2904414 size 0xe4 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x29044f8 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute addr 0x2904518 size 0x80 virtual true final false
  inline bool IsDefaultAttribute();

  // Ctor Parameters [CppParam { name: "", ty: "DesignOnlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesignOnlyAttribute(DesignOnlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesignOnlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesignOnlyAttribute(DesignOnlyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignOnlyAttribute();

public:
  /// @brief Field <IsDesignOnly>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IsDesignOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DesignOnlyAttribute, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DesignOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignOnlyAttribute*, "System.ComponentModel", "DesignOnlyAttribute");
