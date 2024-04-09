#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSerializationReadCallback)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializationReadCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationReadCallback);
// Type: System.Xml.Serialization::XmlSerializationReadCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlSerializationReadCallback*
class CORDL_TYPE XmlSerializationReadCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2dd6abc, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Invoke();

  static inline ::System::Xml::Serialization::XmlSerializationReadCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2dd6a00, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationReadCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReadCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationReadCallback(XmlSerializationReadCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReadCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationReadCallback(XmlSerializationReadCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationReadCallback, 0x80>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationReadCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationReadCallback*, "System.Xml.Serialization", "XmlSerializationReadCallback");
