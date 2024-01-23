#pragma once
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
// Type: System.Xml.Schema::Positions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11598))
// CS Name: ::System.Xml.Schema::Positions*
class CORDL_TYPE Positions : public ::System::Object {
public:
  // Declarations
  /// @brief Field positions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_positions, put = __cordl_internal_set_positions))::System::Collections::ArrayList* positions;

  __declspec(property(get = get_Item))::System::Xml::Schema::Position Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_positions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_positions() const;

  constexpr void __cordl_internal_set_positions(::System::Collections::ArrayList* value);

  /// @brief Method Add, addr 0x28ada20, size 0x90, virtual false, abstract: false, final false
  inline int32_t Add(int32_t symbol, ::System::Object* particle);

  /// @brief Method get_Item, addr 0x28adab0, size 0x90, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::Position get_Item(int32_t pos);

  /// @brief Method get_Count, addr 0x28adb40, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Count();

  static inline ::System::Xml::Schema::Positions* New_ctor();

  /// @brief Method .ctor, addr 0x28adb64, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Positions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Positions(Positions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Positions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Positions(Positions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Positions();

public:
  /// @brief Field positions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___positions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Positions, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::Positions, ___positions) == 0x10, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Positions);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Positions*, "System.Xml.Schema", "Positions");
