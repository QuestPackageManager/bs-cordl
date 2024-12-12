#pragma once
// IWYU pragma private; include "System/Xml/Schema/Positions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Positions)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
struct Position;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class Positions;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Positions);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Positions
class CORDL_TYPE Positions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::System::Xml::Schema::Position Item[];

  /// @brief Field positions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_positions, put = __cordl_internal_set_positions)) ::System::Collections::ArrayList* positions;

  /// @brief Method Add, addr 0x439a380, size 0x90, virtual false, abstract: false, final false
  inline int32_t Add(int32_t symbol, ::System::Object* particle);

  static inline ::System::Xml::Schema::Positions* New_ctor();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_positions() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_positions();

  constexpr void __cordl_internal_set_positions(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x439a4c4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x439a4a0, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x439a410, size 0x90, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::Position get_Item(int32_t pos);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Positions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Positions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Positions(Positions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Positions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Positions(Positions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7493 };

  /// @brief Field positions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___positions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::Positions, ___positions) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Positions, 0x18>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Positions);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Positions*, "System.Xml.Schema", "Positions");
