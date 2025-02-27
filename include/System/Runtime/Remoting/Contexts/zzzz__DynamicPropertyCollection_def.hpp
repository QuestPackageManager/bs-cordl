#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/DynamicPropertyCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicPropertyCollection)
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Remoting::Contexts {
class DynamicPropertyCollection_DynamicPropertyReg;
}
namespace System::Runtime::Remoting::Contexts {
class IDynamicMessageSink;
}
namespace System::Runtime::Remoting::Contexts {
class IDynamicProperty;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class DynamicPropertyCollection;
}
namespace System::Runtime::Remoting::Contexts {
class DynamicPropertyCollection_DynamicPropertyReg;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection);
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg);
// Dependencies System.Object
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
class CORDL_TYPE DynamicPropertyCollection_DynamicPropertyReg : public ::System::Object {
public:
  // Declarations
  /// @brief Field Property, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Property, put = __cordl_internal_set_Property)) ::System::Runtime::Remoting::Contexts::IDynamicProperty* Property;

  /// @brief Field Sink, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Sink, put = __cordl_internal_set_Sink)) ::System::Runtime::Remoting::Contexts::IDynamicMessageSink* Sink;

  static inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg* New_ctor();

  constexpr ::System::Runtime::Remoting::Contexts::IDynamicProperty* const& __cordl_internal_get_Property() const;

  constexpr ::System::Runtime::Remoting::Contexts::IDynamicProperty*& __cordl_internal_get_Property();

  constexpr ::System::Runtime::Remoting::Contexts::IDynamicMessageSink* const& __cordl_internal_get_Sink() const;

  constexpr ::System::Runtime::Remoting::Contexts::IDynamicMessageSink*& __cordl_internal_get_Sink();

  constexpr void __cordl_internal_set_Property(::System::Runtime::Remoting::Contexts::IDynamicProperty* value);

  constexpr void __cordl_internal_set_Sink(::System::Runtime::Remoting::Contexts::IDynamicMessageSink* value);

  /// @brief Method .ctor, addr 0x3ced3a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicPropertyCollection_DynamicPropertyReg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicPropertyCollection_DynamicPropertyReg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicPropertyCollection_DynamicPropertyReg(DynamicPropertyCollection_DynamicPropertyReg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicPropertyCollection_DynamicPropertyReg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicPropertyCollection_DynamicPropertyReg(DynamicPropertyCollection_DynamicPropertyReg const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3098 };

  /// @brief Field Property, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::IDynamicProperty* ___Property;

  /// @brief Field Sink, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::IDynamicMessageSink* ___Sink;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg, ___Property) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg, ___Sink) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Contexts
// Dependencies System.Object
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: System.Runtime.Remoting.Contexts.DynamicPropertyCollection
class CORDL_TYPE DynamicPropertyCollection : public ::System::Object {
public:
  // Declarations
  using DynamicPropertyReg = ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg;

  __declspec(property(get = get_HasProperties)) bool HasProperties;

  /// @brief Field _properties, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__properties, put = __cordl_internal_set__properties)) ::System::Collections::ArrayList* _properties;

  /// @brief Method FindProperty, addr 0x3ced244, size 0x164, virtual false, abstract: false, final false
  inline int32_t FindProperty(::StringW name);

  static inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* New_ctor();

  /// @brief Method NotifyMessage, addr 0x3ceb544, size 0x658, virtual false, abstract: false, final false
  inline void NotifyMessage(bool start, ::System::Runtime::Remoting::Messaging::IMessage* msg, bool client_site, bool async);

  /// @brief Method RegisterDynamicProperty, addr 0x3ceaf1c, size 0x2e4, virtual false, abstract: false, final false
  inline bool RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* prop);

  /// @brief Method UnregisterDynamicProperty, addr 0x3ceb278, size 0x16c, virtual false, abstract: false, final false
  inline bool UnregisterDynamicProperty(::StringW name);

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__properties() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__properties();

  constexpr void __cordl_internal_set__properties(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x3ceb3e4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HasProperties, addr 0x3cead18, size 0x30, virtual false, abstract: false, final false
  inline bool get_HasProperties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicPropertyCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicPropertyCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicPropertyCollection(DynamicPropertyCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicPropertyCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicPropertyCollection(DynamicPropertyCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3099 };

  /// @brief Field _properties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____properties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection, ____properties) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection");
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg*, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection/DynamicPropertyReg");
