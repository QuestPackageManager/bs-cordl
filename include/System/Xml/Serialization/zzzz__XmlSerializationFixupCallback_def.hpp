#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlSerializationFixupCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(XmlSerializationFixupCallback)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializationFixupCallback;
}
// Write type traits
MARK_REF_T(::System::Xml::Serialization::XmlSerializationFixupCallback*);
DEFINE_IL2CPP_CLASS(::System::Xml::Serialization::XmlSerializationFixupCallback*, "System.Xml.Serialization", "XmlSerializationFixupCallback");
// Dependencies System.MulticastDelegate
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationFixupCallback
class CORDL_TYPE XmlSerializationFixupCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x62fd27c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* fixup);

  static inline ::System::Xml::Serialization::XmlSerializationFixupCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62fd138, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationFixupCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationFixupCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationFixupCallback(XmlSerializationFixupCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationFixupCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationFixupCallback(XmlSerializationFixupCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9524 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Serialization::XmlSerializationFixupCallback) == 0x80, "Size mismatch!");

} // namespace System::Xml::Serialization
