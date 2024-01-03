#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SinkProviderData)
namespace System::Collections {
class IList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class SinkProviderData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::SinkProviderData);
// Type: System.Runtime.Remoting.Channels::SinkProviderData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3128))
// CS Name: ::System.Runtime.Remoting.Channels::SinkProviderData*
class CORDL_TYPE SinkProviderData : public ::System::Object {
public:
  // Declarations
  /// @brief Field sinkName, offset 0x10, size 0x8
  __declspec(property(get = __get_sinkName, put = __set_sinkName))::StringW sinkName;

  /// @brief Field children, offset 0x18, size 0x8
  __declspec(property(get = __get_children, put = __set_children))::System::Collections::ArrayList* children;

  /// @brief Field properties, offset 0x20, size 0x8
  __declspec(property(get = __get_properties, put = __set_properties))::System::Collections::Hashtable* properties;

  __declspec(property(get = get_Children))::System::Collections::IList* Children;

  __declspec(property(get = get_Properties))::System::Collections::IDictionary* Properties;

  constexpr ::StringW& __get_sinkName();

  constexpr ::StringW const& __get_sinkName() const;

  constexpr void __set_sinkName(::StringW value);

  constexpr ::System::Collections::ArrayList*& __get_children();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_children() const;

  constexpr void __set_children(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::Hashtable*& __get_properties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_properties() const;

  constexpr void __set_properties(::System::Collections::Hashtable* value);

  static inline ::System::Runtime::Remoting::Channels::SinkProviderData* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x24a41d4, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_Children, addr 0x24a4280, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IList* get_Children();

  /// @brief Method get_Properties, addr 0x24a4288, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* get_Properties();

  // Ctor Parameters [CppParam { name: "", ty: "SinkProviderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SinkProviderData(SinkProviderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SinkProviderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SinkProviderData(SinkProviderData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SinkProviderData();

public:
  /// @brief Field sinkName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___sinkName;

  /// @brief Field children, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___children;

  /// @brief Field properties, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___properties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::SinkProviderData, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Channels::SinkProviderData, ___sinkName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Channels::SinkProviderData, ___children) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Channels::SinkProviderData, ___properties) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::SinkProviderData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::SinkProviderData*, "System.Runtime.Remoting.Channels", "SinkProviderData");
