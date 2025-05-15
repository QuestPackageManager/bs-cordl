#pragma once
// IWYU pragma private; include "System/ComponentModel/ReadOnlyAttribute.hpp"
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
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ReadOnlyAttribute
class CORDL_TYPE ReadOnlyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::System::ComponentModel::ReadOnlyAttribute* Default;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Field No, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_No, put = setStaticF_No)) ::System::ComponentModel::ReadOnlyAttribute* No;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes)) ::System::ComponentModel::ReadOnlyAttribute* Yes;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Method Equals, addr 0x4447f70, size 0xe4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x4448054, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x444805c, size 0x80, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::ReadOnlyAttribute* New_ctor(bool isReadOnly);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x4447f40, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool isReadOnly);

  static inline ::System::ComponentModel::ReadOnlyAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::ReadOnlyAttribute* getStaticF_No();

  static inline ::System::ComponentModel::ReadOnlyAttribute* getStaticF_Yes();

  /// @brief Method get_IsReadOnly, addr 0x4447f68, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReadOnly();

  static inline void setStaticF_Default(::System::ComponentModel::ReadOnlyAttribute* value);

  static inline void setStaticF_No(::System::ComponentModel::ReadOnlyAttribute* value);

  static inline void setStaticF_Yes(::System::ComponentModel::ReadOnlyAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyAttribute(ReadOnlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyAttribute(ReadOnlyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9356 };

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ReadOnlyAttribute, ____IsReadOnly_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReadOnlyAttribute, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReadOnlyAttribute*, "System.ComponentModel", "ReadOnlyAttribute");
