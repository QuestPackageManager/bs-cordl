#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SerializationEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SerializationEntry)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
struct SerializationEntry;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::SerializationEntry);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: true
// CS Name: System.Runtime.Serialization.SerializationEntry
struct CORDL_TYPE SerializationEntry {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Method .ctor, addr 0x3cf3a10, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW entryName, ::System::Object* entryValue, ::System::Type* entryType);

  /// @brief Method get_Name, addr 0x3cf3a24, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Value, addr 0x3cf3a1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationEntry();

  // Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam {
  // name: "_type", ty: "::System::Type*", modifiers: "", def_value: None }]
  constexpr SerializationEntry(::StringW _name, ::System::Object* _value, ::System::Type* _type) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3198 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _name, offset: 0x0, size: 0x8, def value: None
  ::StringW _name;

  /// @brief Field _value, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _value;

  /// @brief Field _type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* _type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::SerializationEntry, _name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationEntry, _value) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationEntry, _type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationEntry, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEntry, "System.Runtime.Serialization", "SerializationEntry");
