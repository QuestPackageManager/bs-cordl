#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/SinkProviderData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SinkProviderData)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class SinkProviderData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::SinkProviderData);
// Dependencies System.Object
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: System.Runtime.Remoting.Channels.SinkProviderData
class CORDL_TYPE SinkProviderData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Children)) ::System::Collections::IList* Children;

  __declspec(property(get = get_Properties)) ::System::Collections::IDictionary* Properties;

  /// @brief Field children, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_children, put = __cordl_internal_set_children)) ::System::Collections::ArrayList* children;

  /// @brief Field properties, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_properties, put = __cordl_internal_set_properties)) ::System::Collections::Hashtable* properties;

  /// @brief Field sinkName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sinkName, put = __cordl_internal_set_sinkName)) ::StringW sinkName;

  static inline ::System::Runtime::Remoting::Channels::SinkProviderData* New_ctor(::StringW name);

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_children() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_children();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_properties() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_properties();

  constexpr ::StringW const& __cordl_internal_get_sinkName() const;

  constexpr ::StringW& __cordl_internal_get_sinkName();

  constexpr void __cordl_internal_set_children(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_properties(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_sinkName(::StringW value);

  /// @brief Method .ctor, addr 0x3ce88e4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_Children, addr 0x3ce8984, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IList* get_Children();

  /// @brief Method get_Properties, addr 0x3ce898c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* get_Properties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SinkProviderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SinkProviderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SinkProviderData(SinkProviderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SinkProviderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SinkProviderData(SinkProviderData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3127 };

  /// @brief Field sinkName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___sinkName;

  /// @brief Field children, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___children;

  /// @brief Field properties, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___properties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Channels::SinkProviderData, ___sinkName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Channels::SinkProviderData, ___children) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Channels::SinkProviderData, ___properties) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::SinkProviderData, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::SinkProviderData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::SinkProviderData*, "System.Runtime.Remoting.Channels", "SinkProviderData");
