#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicPropertyCollection)
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Contexts {
class __DynamicPropertyCollection__DynamicPropertyReg;
}
namespace System::Runtime::Remoting::Contexts {
class IDynamicProperty;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Remoting::Contexts {
class IDynamicMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class DynamicPropertyCollection;
}
namespace System::Runtime::Remoting::Contexts {
class __DynamicPropertyCollection__DynamicPropertyReg;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection);
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg);
// Type: ::DynamicPropertyReg
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3099))
// CS Name: ::DynamicPropertyCollection::DynamicPropertyReg*
class CORDL_TYPE __DynamicPropertyCollection__DynamicPropertyReg : public ::System::Object {
public:
  // Declarations
  /// @brief Field Property, offset 0x10, size 0x8
  __declspec(property(get = __get_Property, put = __set_Property))::System::Runtime::Remoting::Contexts::IDynamicProperty* Property;

  /// @brief Field Sink, offset 0x18, size 0x8
  __declspec(property(get = __get_Sink, put = __set_Sink))::System::Runtime::Remoting::Contexts::IDynamicMessageSink* Sink;

  constexpr ::System::Runtime::Remoting::Contexts::IDynamicProperty*& __get_Property();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::IDynamicProperty*> const& __get_Property() const;

  constexpr void __set_Property(::System::Runtime::Remoting::Contexts::IDynamicProperty* value);

  constexpr ::System::Runtime::Remoting::Contexts::IDynamicMessageSink*& __get_Sink();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*> const& __get_Sink() const;

  constexpr void __set_Sink(::System::Runtime::Remoting::Contexts::IDynamicMessageSink* value);

  static inline ::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg* New_ctor();

  /// @brief Method .ctor, addr 0x249eefc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__DynamicPropertyCollection__DynamicPropertyReg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamicPropertyCollection__DynamicPropertyReg(__DynamicPropertyCollection__DynamicPropertyReg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamicPropertyCollection__DynamicPropertyReg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamicPropertyCollection__DynamicPropertyReg(__DynamicPropertyCollection__DynamicPropertyReg const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamicPropertyCollection__DynamicPropertyReg();

public:
  /// @brief Field Property, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::IDynamicProperty* ___Property;

  /// @brief Field Sink, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::IDynamicMessageSink* ___Sink;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg, ___Property) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg, ___Sink) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Contexts
// Type: System.Runtime.Remoting.Contexts::DynamicPropertyCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3100))
// CS Name: ::System.Runtime.Remoting.Contexts::DynamicPropertyCollection*
class CORDL_TYPE DynamicPropertyCollection : public ::System::Object {
public:
  // Declarations
  using DynamicPropertyReg = ::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg;

  /// @brief Field _properties, offset 0x10, size 0x8
  __declspec(property(get = __get__properties, put = __set__properties))::System::Collections::ArrayList* _properties;

  __declspec(property(get = get_HasProperties)) bool HasProperties;

  constexpr ::System::Collections::ArrayList*& __get__properties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get__properties() const;

  constexpr void __set__properties(::System::Collections::ArrayList* value);

  /// @brief Method get_HasProperties, addr 0x249c7ac, size 0x30, virtual false, abstract: false, final false
  inline bool get_HasProperties();

  /// @brief Method RegisterDynamicProperty, addr 0x249ca38, size 0x2ec, virtual false, abstract: false, final false
  inline bool RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* prop);

  /// @brief Method UnregisterDynamicProperty, addr 0x249cd9c, size 0x178, virtual false, abstract: false, final false
  inline bool UnregisterDynamicProperty(::StringW name);

  /// @brief Method NotifyMessage, addr 0x249d07c, size 0x65c, virtual false, abstract: false, final false
  inline void NotifyMessage(bool start, ::System::Runtime::Remoting::Messaging::IMessage* msg, bool client_site, bool async);

  /// @brief Method FindProperty, addr 0x249ed98, size 0x164, virtual false, abstract: false, final false
  inline int32_t FindProperty(::StringW name);

  static inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* New_ctor();

  /// @brief Method .ctor, addr 0x249cf14, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DynamicPropertyCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicPropertyCollection(DynamicPropertyCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicPropertyCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicPropertyCollection(DynamicPropertyCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicPropertyCollection();

public:
  /// @brief Field _properties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____properties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection, ____properties) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection");
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg*, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection/DynamicPropertyReg");
