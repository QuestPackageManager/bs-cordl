#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__ActiveAxis_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocatedActiveAxis)
namespace System::Xml::Schema {
class Asttree;
}
namespace System::Xml::Schema {
class KeySequence;
}
// Forward declare root types
namespace System::Xml::Schema {
class LocatedActiveAxis;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::LocatedActiveAxis);
// Type: System.Xml.Schema::LocatedActiveAxis
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::LocatedActiveAxis*
class CORDL_TYPE LocatedActiveAxis : public ::System::Xml::Schema::ActiveAxis {
public:
  // Declarations
  __declspec(property(get = get_Column)) int32_t Column;

  /// @brief Field Ks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Ks, put = __cordl_internal_set_Ks))::System::Xml::Schema::KeySequence* Ks;

  /// @brief Field column, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_column, put = __cordl_internal_set_column)) int32_t column;

  /// @brief Field isMatched, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_isMatched, put = __cordl_internal_set_isMatched)) bool isMatched;

  static inline ::System::Xml::Schema::LocatedActiveAxis* New_ctor(::System::Xml::Schema::Asttree* astfield, ::System::Xml::Schema::KeySequence* ks, int32_t column);

  /// @brief Method Reactivate, addr 0x2ef6904, size 0x18, virtual false, abstract: false, final false
  inline void Reactivate(::System::Xml::Schema::KeySequence* ks);

  constexpr ::System::Xml::Schema::KeySequence*& __cordl_internal_get_Ks();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::KeySequence*> const& __cordl_internal_get_Ks() const;

  constexpr int32_t const& __cordl_internal_get_column() const;

  constexpr int32_t& __cordl_internal_get_column();

  constexpr bool const& __cordl_internal_get_isMatched() const;

  constexpr bool& __cordl_internal_get_isMatched();

  constexpr void __cordl_internal_set_Ks(::System::Xml::Schema::KeySequence* value);

  constexpr void __cordl_internal_set_column(int32_t value);

  constexpr void __cordl_internal_set_isMatched(bool value);

  /// @brief Method .ctor, addr 0x2ef68d4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::Asttree* astfield, ::System::Xml::Schema::KeySequence* ks, int32_t column);

  /// @brief Method get_Column, addr 0x2ef68cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Column();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocatedActiveAxis();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocatedActiveAxis", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocatedActiveAxis(LocatedActiveAxis&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocatedActiveAxis", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocatedActiveAxis(LocatedActiveAxis const&) = delete;

  /// @brief Field column, offset: 0x28, size: 0x4, def value: None
  int32_t ___column;

  /// @brief Field isMatched, offset: 0x2c, size: 0x1, def value: None
  bool ___isMatched;

  /// @brief Field Ks, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::KeySequence* ___Ks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::LocatedActiveAxis, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::LocatedActiveAxis, ___column) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::LocatedActiveAxis, ___isMatched) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::LocatedActiveAxis, ___Ks) == 0x30, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::LocatedActiveAxis);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::LocatedActiveAxis*, "System.Xml.Schema", "LocatedActiveAxis");
