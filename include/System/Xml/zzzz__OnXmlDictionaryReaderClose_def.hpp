#pragma once
// IWYU pragma private; include "System/Xml/OnXmlDictionaryReaderClose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnXmlDictionaryReaderClose)
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class OnXmlDictionaryReaderClose;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::OnXmlDictionaryReaderClose);
// Dependencies System.MulticastDelegate
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.OnXmlDictionaryReaderClose
class CORDL_TYPE OnXmlDictionaryReaderClose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x5f6b95c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::XmlDictionaryReader* reader);

  static inline ::System::Xml::OnXmlDictionaryReaderClose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5f6b818, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnXmlDictionaryReaderClose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnXmlDictionaryReaderClose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnXmlDictionaryReaderClose(OnXmlDictionaryReaderClose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnXmlDictionaryReaderClose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnXmlDictionaryReaderClose(OnXmlDictionaryReaderClose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16949 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::OnXmlDictionaryReaderClose, 0x80>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::OnXmlDictionaryReaderClose);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::OnXmlDictionaryReaderClose*, "System.Xml", "OnXmlDictionaryReaderClose");
