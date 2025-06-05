#pragma once
// IWYU pragma private; include "System/ComponentModel/NotifyParentPropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotifyParentPropertyAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class NotifyParentPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::NotifyParentPropertyAttribute);
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.NotifyParentPropertyAttribute
class CORDL_TYPE NotifyParentPropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::System::ComponentModel::NotifyParentPropertyAttribute* Default;

  /// @brief Field No, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_No, put = setStaticF_No)) ::System::ComponentModel::NotifyParentPropertyAttribute* No;

  __declspec(property(get = get_NotifyParent)) bool NotifyParent;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes)) ::System::ComponentModel::NotifyParentPropertyAttribute* Yes;

  /// @brief Field notifyParent, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_notifyParent, put = __cordl_internal_set_notifyParent)) bool notifyParent;

  /// @brief Method Equals, addr 0x447e030, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x447e0b0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x447e0b8, size 0x68, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::NotifyParentPropertyAttribute* New_ctor(bool notifyParent);

  constexpr bool const& __cordl_internal_get_notifyParent() const;

  constexpr bool& __cordl_internal_get_notifyParent();

  constexpr void __cordl_internal_set_notifyParent(bool value);

  /// @brief Method .ctor, addr 0x447e000, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool notifyParent);

  static inline ::System::ComponentModel::NotifyParentPropertyAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::NotifyParentPropertyAttribute* getStaticF_No();

  static inline ::System::ComponentModel::NotifyParentPropertyAttribute* getStaticF_Yes();

  /// @brief Method get_NotifyParent, addr 0x447e028, size 0x8, virtual false, abstract: false, final false
  inline bool get_NotifyParent();

  static inline void setStaticF_Default(::System::ComponentModel::NotifyParentPropertyAttribute* value);

  static inline void setStaticF_No(::System::ComponentModel::NotifyParentPropertyAttribute* value);

  static inline void setStaticF_Yes(::System::ComponentModel::NotifyParentPropertyAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotifyParentPropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotifyParentPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotifyParentPropertyAttribute(NotifyParentPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotifyParentPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotifyParentPropertyAttribute(NotifyParentPropertyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9464 };

  /// @brief Field notifyParent, offset: 0x10, size: 0x1, def value: None
  bool ___notifyParent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::NotifyParentPropertyAttribute, ___notifyParent) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::NotifyParentPropertyAttribute, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::NotifyParentPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NotifyParentPropertyAttribute*, "System.ComponentModel", "NotifyParentPropertyAttribute");
