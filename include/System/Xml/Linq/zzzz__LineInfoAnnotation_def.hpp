#pragma once
// IWYU pragma private; include "System/Xml/Linq/LineInfoAnnotation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LineInfoAnnotation)
// Forward declare root types
namespace System::Xml::Linq {
class LineInfoAnnotation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::LineInfoAnnotation);
// Dependencies System.Object
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.LineInfoAnnotation
class CORDL_TYPE LineInfoAnnotation : public ::System::Object {
public:
  // Declarations
  /// @brief Field lineNumber, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNumber, put = __cordl_internal_set_lineNumber)) int32_t lineNumber;

  /// @brief Field linePosition, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_linePosition, put = __cordl_internal_set_linePosition)) int32_t linePosition;

  static inline ::System::Xml::Linq::LineInfoAnnotation* New_ctor(int32_t lineNumber, int32_t linePosition);

  constexpr int32_t const& __cordl_internal_get_lineNumber() const;

  constexpr int32_t& __cordl_internal_get_lineNumber();

  constexpr int32_t const& __cordl_internal_get_linePosition() const;

  constexpr int32_t& __cordl_internal_get_linePosition();

  constexpr void __cordl_internal_set_lineNumber(int32_t value);

  constexpr void __cordl_internal_set_linePosition(int32_t value);

  /// @brief Method .ctor, addr 0x42454c4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t lineNumber, int32_t linePosition);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LineInfoAnnotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LineInfoAnnotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LineInfoAnnotation(LineInfoAnnotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LineInfoAnnotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LineInfoAnnotation(LineInfoAnnotation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17957 };

  /// @brief Field lineNumber, offset: 0x10, size: 0x4, def value: None
  int32_t ___lineNumber;

  /// @brief Field linePosition, offset: 0x14, size: 0x4, def value: None
  int32_t ___linePosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::LineInfoAnnotation, ___lineNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::LineInfoAnnotation, ___linePosition) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::LineInfoAnnotation, 0x18>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::LineInfoAnnotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::LineInfoAnnotation*, "System.Xml.Linq", "LineInfoAnnotation");
