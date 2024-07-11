#pragma once
// IWYU pragma private; include "System/ComponentModel/EditorBrowsableAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__EditorBrowsableState_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EditorBrowsableAttribute)
namespace System::ComponentModel {
struct EditorBrowsableState;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class EditorBrowsableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::EditorBrowsableAttribute);
// Type: System.ComponentModel::EditorBrowsableAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::EditorBrowsableAttribute*
class CORDL_TYPE EditorBrowsableAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field browsableState, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_browsableState, put = __cordl_internal_set_browsableState))::System::ComponentModel::EditorBrowsableState browsableState;

  /// @brief Method Equals, addr 0x2f5ee78, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2f5ef04, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::EditorBrowsableAttribute* New_ctor(::System::ComponentModel::EditorBrowsableState state);

  constexpr ::System::ComponentModel::EditorBrowsableState const& __cordl_internal_get_browsableState() const;

  constexpr ::System::ComponentModel::EditorBrowsableState& __cordl_internal_get_browsableState();

  constexpr void __cordl_internal_set_browsableState(::System::ComponentModel::EditorBrowsableState value);

  /// @brief Method .ctor, addr 0x2f5ee50, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::EditorBrowsableState state);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditorBrowsableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EditorBrowsableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditorBrowsableAttribute(EditorBrowsableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditorBrowsableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditorBrowsableAttribute(EditorBrowsableAttribute const&) = delete;

  /// @brief Field browsableState, offset: 0x10, size: 0x4, def value: None
  ::System::ComponentModel::EditorBrowsableState ___browsableState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::EditorBrowsableAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::EditorBrowsableAttribute, ___browsableState) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::EditorBrowsableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EditorBrowsableAttribute*, "System.ComponentModel", "EditorBrowsableAttribute");
