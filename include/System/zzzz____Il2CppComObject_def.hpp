#pragma once
// IWYU pragma private; include "System/__Il2CppComObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(__Il2CppComObject)
// Forward declare root types
namespace System {
class __Il2CppComObject;
}
// Write type traits
MARK_REF_PTR_T(::System::__Il2CppComObject);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.__Il2CppComObject
class CORDL_TYPE __Il2CppComObject : public ::System::Object {
public:
  // Declarations
  /// @brief Method Finalize, addr 0x4b5e63c, size 0x3c, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19308 };

  /// @brief Size padding 0xb0 - 0x10 = 0xa0, packed as 0xa0
  uint8_t _cordl_size_padding[0xa0];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Il2CppComObject, 0xb0>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::__Il2CppComObject);
DEFINE_IL2CPP_ARG_TYPE(::System::__Il2CppComObject*, "System", "__Il2CppComObject");
