#pragma once
// IWYU pragma private; include "System/Xml/Serialization/UnreferencedObjectEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnreferencedObjectEventHandler)
namespace System::Xml::Serialization {
class UnreferencedObjectEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class UnreferencedObjectEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::UnreferencedObjectEventHandler);
// Type: System.Xml.Serialization::UnreferencedObjectEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::UnreferencedObjectEventHandler*
class CORDL_TYPE UnreferencedObjectEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2ee3894, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::Xml::Serialization::UnreferencedObjectEventArgs* e);

  static inline ::System::Xml::Serialization::UnreferencedObjectEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2ee3764, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnreferencedObjectEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnreferencedObjectEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnreferencedObjectEventHandler(UnreferencedObjectEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnreferencedObjectEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnreferencedObjectEventHandler(UnreferencedObjectEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::UnreferencedObjectEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::UnreferencedObjectEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::UnreferencedObjectEventHandler*, "System.Xml.Serialization", "UnreferencedObjectEventHandler");
