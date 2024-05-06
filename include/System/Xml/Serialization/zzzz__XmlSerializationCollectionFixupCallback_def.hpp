#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationCollectionFixupCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSerializationCollectionFixupCallback)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializationCollectionFixupCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationCollectionFixupCallback);
// Type: System.Xml.Serialization::XmlSerializationCollectionFixupCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlSerializationCollectionFixupCallback*
class CORDL_TYPE XmlSerializationCollectionFixupCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2ed71a0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* collection, ::System::Object* collectionItems);

  static inline ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2ed7070, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationCollectionFixupCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationCollectionFixupCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationCollectionFixupCallback(XmlSerializationCollectionFixupCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationCollectionFixupCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationCollectionFixupCallback(XmlSerializationCollectionFixupCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback, 0x80>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationCollectionFixupCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*, "System.Xml.Serialization", "XmlSerializationCollectionFixupCallback");
