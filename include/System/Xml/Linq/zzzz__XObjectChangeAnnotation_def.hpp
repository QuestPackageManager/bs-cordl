#pragma once
// IWYU pragma private; include "System/Xml/Linq/XObjectChangeAnnotation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XObjectChangeAnnotation)
namespace System::Xml::Linq {
class XObjectChangeEventArgs;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
// Forward declare root types
namespace System::Xml::Linq {
class XObjectChangeAnnotation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XObjectChangeAnnotation);
// Dependencies System.Object
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XObjectChangeAnnotation
class CORDL_TYPE XObjectChangeAnnotation : public ::System::Object {
public:
  // Declarations
  /// @brief Field changed, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_changed, put = __cordl_internal_set_changed)) ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* changed;

  /// @brief Field changing, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_changing, put = __cordl_internal_set_changing)) ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* changing;

  constexpr ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* const& __cordl_internal_get_changed() const;

  constexpr ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*& __cordl_internal_get_changed();

  constexpr ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* const& __cordl_internal_get_changing() const;

  constexpr ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*& __cordl_internal_get_changing();

  constexpr void __cordl_internal_set_changed(::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* value);

  constexpr void __cordl_internal_set_changing(::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XObjectChangeAnnotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XObjectChangeAnnotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XObjectChangeAnnotation(XObjectChangeAnnotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XObjectChangeAnnotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XObjectChangeAnnotation(XObjectChangeAnnotation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21802 };

  /// @brief Field changing, offset: 0x10, size: 0x8, def value: None
  ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* ___changing;

  /// @brief Field changed, offset: 0x18, size: 0x8, def value: None
  ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* ___changed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XObjectChangeAnnotation, ___changing) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XObjectChangeAnnotation, ___changed) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XObjectChangeAnnotation, 0x20>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XObjectChangeAnnotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XObjectChangeAnnotation*, "System.Xml.Linq", "XObjectChangeAnnotation");
