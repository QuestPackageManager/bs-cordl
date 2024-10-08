#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlValueGetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlValueGetter)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlValueGetter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlValueGetter);
// Type: System.Xml.Schema::XmlValueGetter
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlValueGetter*
class CORDL_TYPE XmlValueGetter : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x42538dc, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Invoke();

  static inline ::System::Xml::Schema::XmlValueGetter* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4253854, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlValueGetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlValueGetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlValueGetter(XmlValueGetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlValueGetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlValueGetter(XmlValueGetter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7699 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlValueGetter, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlValueGetter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlValueGetter*, "System.Xml.Schema", "XmlValueGetter");
