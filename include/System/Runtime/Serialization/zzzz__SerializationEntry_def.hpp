#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SerializationEntry)
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
struct SerializationEntry;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::SerializationEntry);
// Type: System.Runtime.Serialization::SerializationEntry
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3198))
// CS Name: ::System.Runtime.Serialization::SerializationEntry
struct CORDL_TYPE SerializationEntry {
public:
  // Declarations
  __declspec(property(get = get_Value))::System::Object* Value;

  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Method .ctor, addr 0x24b4500, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW entryName, ::System::Object* entryValue, ::System::Type* entryType);

  /// @brief Method get_Value, addr 0x24b450c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Method get_Name, addr 0x24b4514, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  // Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam {
  // name: "_type", ty: "::System::Type*", modifiers: "", def_value: None }]
  constexpr SerializationEntry(::StringW _name, ::System::Object* _value, ::System::Type* _type) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationEntry();

  /// @brief Field _name, offset: 0x0, size: 0x8, def value: None
  ::StringW _name;

  /// @brief Field _value, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _value;

  /// @brief Field _type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* _type;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationEntry, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationEntry, _name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationEntry, _value) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationEntry, _type) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEntry, "System.Runtime.Serialization", "SerializationEntry");
