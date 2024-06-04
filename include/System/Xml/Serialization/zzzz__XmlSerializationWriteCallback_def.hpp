#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationWriteCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
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
// Type: System.Xml.Serialization::XmlSerializationWriteCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlSerializationWriteCallback*
class CORDL_TYPE XmlSerializationWriteCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2f01bc4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* o);

  static inline ::System::Xml::Serialization::XmlSerializationWriteCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2f01a98, size 0x12c, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationWriteCallback, 0x80>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationWriteCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationWriteCallback*, "System.Xml.Serialization", "XmlSerializationWriteCallback");
