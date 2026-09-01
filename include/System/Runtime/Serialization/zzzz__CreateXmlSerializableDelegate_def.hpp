#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\CreateXmlSerializableDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(CreateXmlSerializableDelegate)
namespace System::Xml::Serialization {
class IXmlSerializable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class CreateXmlSerializableDelegate;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::CreateXmlSerializableDelegate*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::CreateXmlSerializableDelegate*, "System.Runtime.Serialization", "CreateXmlSerializableDelegate");
// Dependencies System.MulticastDelegate
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.CreateXmlSerializableDelegate
class CORDL_TYPE CreateXmlSerializableDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6161ab8, size 0x14, virtual true, abstract: false, final false
  inline ::System::Xml::Serialization::IXmlSerializable* Invoke();

  static inline ::System::Runtime::Serialization::CreateXmlSerializableDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6161a50, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateXmlSerializableDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateXmlSerializableDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateXmlSerializableDelegate(CreateXmlSerializableDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateXmlSerializableDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateXmlSerializableDelegate(CreateXmlSerializableDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17118 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::CreateXmlSerializableDelegate) == 0x80, "Size mismatch!");

} // namespace System::Runtime::Serialization
