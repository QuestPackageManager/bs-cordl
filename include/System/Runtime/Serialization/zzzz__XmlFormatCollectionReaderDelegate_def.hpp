#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlFormatCollectionReaderDelegate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(XmlFormatCollectionReaderDelegate)
namespace System::Runtime::Serialization {
class CollectionDataContract;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContext;
}
namespace System::Runtime::Serialization {
class XmlReaderDelegator;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlFormatCollectionReaderDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate);
// Dependencies System.MulticastDelegate
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatCollectionReaderDelegate
class CORDL_TYPE XmlFormatCollectionReaderDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x5f4733c, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                  ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                  ::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  static inline ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5f471f4, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlFormatCollectionReaderDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatCollectionReaderDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlFormatCollectionReaderDelegate(XmlFormatCollectionReaderDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatCollectionReaderDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlFormatCollectionReaderDelegate(XmlFormatCollectionReaderDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17077 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate, 0x80>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate*, "System.Runtime.Serialization", "XmlFormatCollectionReaderDelegate");
