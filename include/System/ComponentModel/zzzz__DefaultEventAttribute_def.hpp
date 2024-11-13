#pragma once
// IWYU pragma private; include "System/ComponentModel/DefaultEventAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultEventAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DefaultEventAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DefaultEventAttribute);
// Type: System.ComponentModel::DefaultEventAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::DefaultEventAttribute*
class CORDL_TYPE DefaultEventAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::System::ComponentModel::DefaultEventAttribute* Default;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method Equals, addr 0x43eec80, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x43eed00, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::DefaultEventAttribute* New_ctor(::StringW name);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x43eec50, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  static inline ::System::ComponentModel::DefaultEventAttribute* getStaticF_Default();

  /// @brief Method get_Name, addr 0x43eec78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  static inline void setStaticF_Default(::System::ComponentModel::DefaultEventAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEventAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEventAttribute(DefaultEventAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEventAttribute(DefaultEventAttribute const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9348 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DefaultEventAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DefaultEventAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DefaultEventAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DefaultEventAttribute*, "System.ComponentModel", "DefaultEventAttribute");
