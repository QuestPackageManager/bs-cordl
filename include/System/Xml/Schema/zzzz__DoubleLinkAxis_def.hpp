#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__Axis_def.hpp"
CORDL_MODULE_EXPORT(DoubleLinkAxis)
namespace MS::Internal::Xml::XPath {
class Axis;
}
// Forward declare root types
namespace System::Xml::Schema {
class DoubleLinkAxis;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::DoubleLinkAxis);
// Type: System.Xml.Schema::DoubleLinkAxis
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::DoubleLinkAxis*
class CORDL_TYPE DoubleLinkAxis : public ::MS::Internal::Xml::XPath::Axis {
public:
  // Declarations
  __declspec(property(get = get_Next, put = set_Next))::MS::Internal::Xml::XPath::Axis* Next;

  /// @brief Field next, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next))::MS::Internal::Xml::XPath::Axis* next;

  /// @brief Method ConvertTree, addr 0x2df1bb8, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::DoubleLinkAxis* ConvertTree(::MS::Internal::Xml::XPath::Axis* axis);

  static inline ::System::Xml::Schema::DoubleLinkAxis* New_ctor(::MS::Internal::Xml::XPath::Axis* axis, ::System::Xml::Schema::DoubleLinkAxis* inputaxis);

  constexpr ::MS::Internal::Xml::XPath::Axis*& __cordl_internal_get_next();

  constexpr ::cordl_internals::to_const_pointer<::MS::Internal::Xml::XPath::Axis*> const& __cordl_internal_get_next() const;

  constexpr void __cordl_internal_set_next(::MS::Internal::Xml::XPath::Axis* value);

  /// @brief Method .ctor, addr 0x2df1b60, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::MS::Internal::Xml::XPath::Axis* axis, ::System::Xml::Schema::DoubleLinkAxis* inputaxis);

  /// @brief Method get_Next, addr 0x2df1b50, size 0x8, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::Axis* get_Next();

  /// @brief Method set_Next, addr 0x2df1b58, size 0x8, virtual false, abstract: false, final false
  inline void set_Next(::MS::Internal::Xml::XPath::Axis* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleLinkAxis();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoubleLinkAxis", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleLinkAxis(DoubleLinkAxis&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleLinkAxis", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleLinkAxis(DoubleLinkAxis const&) = delete;

  /// @brief Field next, offset: 0x40, size: 0x8, def value: None
  ::MS::Internal::Xml::XPath::Axis* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::DoubleLinkAxis, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::DoubleLinkAxis, ___next) == 0x40, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::DoubleLinkAxis);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DoubleLinkAxis*, "System.Xml.Schema", "DoubleLinkAxis");
