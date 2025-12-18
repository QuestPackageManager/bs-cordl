#pragma once
// IWYU pragma private; include "System/Reflection/MemberFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(MemberFilter)
namespace System::Reflection {
class MemberInfo;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Reflection {
class MemberFilter;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::MemberFilter);
// Dependencies System.MulticastDelegate
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.MemberFilter
class CORDL_TYPE MemberFilter : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x59cf030, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria);

  static inline ::System::Reflection::MemberFilter* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x59ceee8, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemberFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberFilter(MemberFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberFilter(MemberFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3497 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MemberFilter, 0x80>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::MemberFilter);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MemberFilter*, "System.Reflection", "MemberFilter");
