#pragma once
// IWYU pragma private; include "System/Xml/CachingEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(CachingEventHandler)
namespace System::Xml {
class XsdCachingReader;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class CachingEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::CachingEventHandler);
// Dependencies System.MulticastDelegate
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.CachingEventHandler
class CORDL_TYPE CachingEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x432ecf0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::XsdCachingReader* cachingReader);

  static inline ::System::Xml::CachingEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x432ebf0, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachingEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CachingEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachingEventHandler(CachingEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachingEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachingEventHandler(CachingEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7282 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::CachingEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::CachingEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::CachingEventHandler*, "System.Xml", "CachingEventHandler");
