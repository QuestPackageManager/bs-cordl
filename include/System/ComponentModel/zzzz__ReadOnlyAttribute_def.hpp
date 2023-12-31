#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ReadOnlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ReadOnlyAttribute);
// Type: System.ComponentModel::ReadOnlyAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9400))
// CS Name: ::System.ComponentModel::ReadOnlyAttribute*
class CORDL_TYPE ReadOnlyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <IsReadOnly>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__IsReadOnly_k__BackingField, put = __set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes))::System::ComponentModel::ReadOnlyAttribute* Yes;

  /// @brief Field No, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_No, put = setStaticF_No))::System::ComponentModel::ReadOnlyAttribute* No;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::ReadOnlyAttribute* Default;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  constexpr bool& __get__IsReadOnly_k__BackingField();

  constexpr bool const& __get__IsReadOnly_k__BackingField() const;

  constexpr void __set__IsReadOnly_k__BackingField(bool value);

  static inline void setStaticF_Yes(::System::ComponentModel::ReadOnlyAttribute* value);

  static inline ::System::ComponentModel::ReadOnlyAttribute* getStaticF_Yes();

  static inline void setStaticF_No(::System::ComponentModel::ReadOnlyAttribute* value);

  static inline ::System::ComponentModel::ReadOnlyAttribute* getStaticF_No();

  static inline void setStaticF_Default(::System::ComponentModel::ReadOnlyAttribute* value);

  static inline ::System::ComponentModel::ReadOnlyAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::ReadOnlyAttribute* New_ctor(bool isReadOnly);

  /// @brief Method .ctor, addr 0x2904f34, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool isReadOnly);

  /// @brief Method get_IsReadOnly, addr 0x2904f5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method Equals, addr 0x2904f64, size 0xe4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x2905048, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x2905050, size 0x80, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyAttribute(ReadOnlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyAttribute(ReadOnlyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyAttribute();

public:
  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReadOnlyAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ReadOnlyAttribute, ____IsReadOnly_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReadOnlyAttribute*, "System.ComponentModel", "ReadOnlyAttribute");
