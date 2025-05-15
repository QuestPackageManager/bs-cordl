#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationWriteCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(XmlSerializationWriteCallback)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializationWriteCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationWriteCallback);
// Dependencies System.MulticastDelegate
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationWriteCallback
class CORDL_TYPE XmlSerializationWriteCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4384220, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* o);

  static inline ::System::Xml::Serialization::XmlSerializationWriteCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4384120, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationWriteCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationWriteCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationWriteCallback(XmlSerializationWriteCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationWriteCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationWriteCallback(XmlSerializationWriteCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7445 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationWriteCallback, 0x80>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationWriteCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationWriteCallback*, "System.Xml.Serialization", "XmlSerializationWriteCallback");
