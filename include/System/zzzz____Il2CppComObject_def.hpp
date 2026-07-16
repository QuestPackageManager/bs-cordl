#pragma once
// IWYU pragma private; include "System/__Il2CppComObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(__Il2CppComObject)
// Forward declare root types
namespace System {
class __Il2CppComObject;
}
// Write type traits
MARK_REF_T(::System::__Il2CppComObject*);
DEFINE_IL2CPP_CLASS(::System::__Il2CppComObject*, "System", "__Il2CppComObject");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.__Il2CppComObject
class CORDL_TYPE __Il2CppComObject : public ::System::Object {
public:
  // Declarations
  /// @brief Method Finalize, addr 0x6ea3be0, size 0x30, virtual true, abstract: false, final false
  inline void Finalize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Il2CppComObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Il2CppComObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Il2CppComObject(__Il2CppComObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Il2CppComObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Il2CppComObject(__Il2CppComObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23738 };

  /// @brief Size padding 0xb0 - 0x10 = 0xa0, packed as 0xa0
  uint8_t _cordl_size_padding[0xa0];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::__Il2CppComObject) == 0xb0, "Size mismatch!");

} // namespace System
