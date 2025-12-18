#pragma once
// IWYU pragma private; include "System/Reflection/TypeFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(TypeFilter)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class TypeFilter;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::TypeFilter);
// Dependencies System.MulticastDelegate
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.TypeFilter
class CORDL_TYPE TypeFilter : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x59d45a0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::System::Type* m, ::System::Object* filterCriteria);

  static inline ::System::Reflection::TypeFilter* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x59d0714, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeFilter(TypeFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeFilter(TypeFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3527 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::TypeFilter, 0x80>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::TypeFilter);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TypeFilter*, "System.Reflection", "TypeFilter");
