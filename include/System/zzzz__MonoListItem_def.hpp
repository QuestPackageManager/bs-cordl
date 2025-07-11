#pragma once
// IWYU pragma private; include "System/MonoListItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MonoListItem)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class MonoListItem;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoListItem);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.MonoListItem
class CORDL_TYPE MonoListItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::System::Object* data;

  /// @brief Field next, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::System::MonoListItem* next;

  static inline ::System::MonoListItem* New_ctor();

  constexpr ::System::Object* const& __cordl_internal_get_data() const;

  constexpr ::System::Object*& __cordl_internal_get_data();

  constexpr ::System::MonoListItem* const& __cordl_internal_get_next() const;

  constexpr ::System::MonoListItem*& __cordl_internal_get_next();

  constexpr void __cordl_internal_set_data(::System::Object* value);

  constexpr void __cordl_internal_set_next(::System::MonoListItem* value);

  /// @brief Method .ctor, addr 0x3e3a894, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoListItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoListItem(MonoListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoListItem(MonoListItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2611 };

  /// @brief Field next, offset: 0x10, size: 0x8, def value: None
  ::System::MonoListItem* ___next;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::MonoListItem, ___next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::MonoListItem, ___data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::MonoListItem, 0x20>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoListItem);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoListItem*, "System", "MonoListItem");
