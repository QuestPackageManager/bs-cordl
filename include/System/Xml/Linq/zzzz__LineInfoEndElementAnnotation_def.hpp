#pragma once
// IWYU pragma private; include "System/Xml/Linq/LineInfoEndElementAnnotation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__LineInfoAnnotation_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LineInfoEndElementAnnotation)
// Forward declare root types
namespace System::Xml::Linq {
class LineInfoEndElementAnnotation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::LineInfoEndElementAnnotation);
// Dependencies System.Xml.Linq.LineInfoAnnotation
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.LineInfoEndElementAnnotation
class CORDL_TYPE LineInfoEndElementAnnotation : public ::System::Xml::Linq::LineInfoAnnotation {
public:
  // Declarations
  static inline ::System::Xml::Linq::LineInfoEndElementAnnotation* New_ctor(int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor, addr 0x4243eb0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t lineNumber, int32_t linePosition);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LineInfoEndElementAnnotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LineInfoEndElementAnnotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LineInfoEndElementAnnotation(LineInfoEndElementAnnotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LineInfoEndElementAnnotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LineInfoEndElementAnnotation(LineInfoEndElementAnnotation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17945 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::LineInfoEndElementAnnotation, 0x18>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::LineInfoEndElementAnnotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::LineInfoEndElementAnnotation*, "System.Xml.Linq", "LineInfoEndElementAnnotation");
