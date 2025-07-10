#pragma once
// IWYU pragma private; include "System/ComponentModel/RefreshPropertiesAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__RefreshProperties_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RefreshPropertiesAttribute)
namespace System::ComponentModel {
struct RefreshProperties;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class RefreshPropertiesAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::RefreshPropertiesAttribute);
// Dependencies System.Attribute, System.ComponentModel.RefreshProperties
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.RefreshPropertiesAttribute
class CORDL_TYPE RefreshPropertiesAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field All, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_All, put = setStaticF_All)) ::System::ComponentModel::RefreshPropertiesAttribute* All;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::System::ComponentModel::RefreshPropertiesAttribute* Default;

  __declspec(property(get = get_RefreshProperties)) ::System::ComponentModel::RefreshProperties RefreshProperties;

  /// @brief Field Repaint, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Repaint, put = setStaticF_Repaint)) ::System::ComponentModel::RefreshPropertiesAttribute* Repaint;

  /// @brief Field refresh, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_refresh, put = __cordl_internal_set_refresh)) ::System::ComponentModel::RefreshProperties refresh;

  /// @brief Method Equals, addr 0x447de70, size 0x70, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x447dee0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x447dee8, size 0x68, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::RefreshPropertiesAttribute* New_ctor(::System::ComponentModel::RefreshProperties refresh);

  constexpr ::System::ComponentModel::RefreshProperties const& __cordl_internal_get_refresh() const;

  constexpr ::System::ComponentModel::RefreshProperties& __cordl_internal_get_refresh();

  constexpr void __cordl_internal_set_refresh(::System::ComponentModel::RefreshProperties value);

  /// @brief Method .ctor, addr 0x447de40, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::RefreshProperties refresh);

  static inline ::System::ComponentModel::RefreshPropertiesAttribute* getStaticF_All();

  static inline ::System::ComponentModel::RefreshPropertiesAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::RefreshPropertiesAttribute* getStaticF_Repaint();

  /// @brief Method get_RefreshProperties, addr 0x447de68, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::RefreshProperties get_RefreshProperties();

  static inline void setStaticF_All(::System::ComponentModel::RefreshPropertiesAttribute* value);

  static inline void setStaticF_Default(::System::ComponentModel::RefreshPropertiesAttribute* value);

  static inline void setStaticF_Repaint(::System::ComponentModel::RefreshPropertiesAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RefreshPropertiesAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RefreshPropertiesAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RefreshPropertiesAttribute(RefreshPropertiesAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RefreshPropertiesAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RefreshPropertiesAttribute(RefreshPropertiesAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9466 };

  /// @brief Field refresh, offset: 0x10, size: 0x4, def value: None
  ::System::ComponentModel::RefreshProperties ___refresh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::RefreshPropertiesAttribute, ___refresh) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::RefreshPropertiesAttribute, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::RefreshPropertiesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::RefreshPropertiesAttribute*, "System.ComponentModel", "RefreshPropertiesAttribute");
