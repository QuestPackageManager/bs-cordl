#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeFilter)
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
// Type: System.Reflection::TypeFilter
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::TypeFilter*
class CORDL_TYPE TypeFilter : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x276d434, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::System::Type* m, ::System::Object* filterCriteria);

  static inline ::System::Reflection::TypeFilter* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27695f8, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::TypeFilter, 0x80>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::TypeFilter);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TypeFilter*, "System.Reflection", "TypeFilter");
