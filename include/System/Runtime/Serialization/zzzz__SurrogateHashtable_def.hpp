#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SurrogateHashtable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SurrogateHashtable)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SurrogateHashtable;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SurrogateHashtable);
// Dependencies System.Collections.Hashtable
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SurrogateHashtable
class CORDL_TYPE SurrogateHashtable : public ::System::Collections::Hashtable {
public:
  // Declarations
  /// @brief Method KeyEquals, addr 0x3cfe920, size 0x128, virtual true, abstract: false, final false
  inline bool KeyEquals(::System::Object* key, ::System::Object* item);

  static inline ::System::Runtime::Serialization::SurrogateHashtable* New_ctor(int32_t size);

  /// @brief Method .ctor, addr 0x3cfe588, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SurrogateHashtable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SurrogateHashtable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SurrogateHashtable(SurrogateHashtable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SurrogateHashtable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SurrogateHashtable(SurrogateHashtable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3239 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SurrogateHashtable, 0x50>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateHashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateHashtable*, "System.Runtime.Serialization", "SurrogateHashtable");
