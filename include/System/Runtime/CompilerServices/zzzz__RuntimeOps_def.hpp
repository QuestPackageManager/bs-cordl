#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/RuntimeOps.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeOps)
namespace System::Dynamic {
class ExpandoObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RuntimeOps;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::RuntimeOps);
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.RuntimeOps
class CORDL_TYPE RuntimeOps : public ::System::Object {
public:
  // Declarations
  /// @brief Method ExpandoCheckVersion, addr 0x40fae50, size 0x28, virtual false, abstract: false, final false
  static inline bool ExpandoCheckVersion(::System::Dynamic::ExpandoObject* expando, ::System::Object* version);

  /// @brief Method ExpandoPromoteClass, addr 0x40fae94, size 0x10, virtual false, abstract: false, final false
  static inline void ExpandoPromoteClass(::System::Dynamic::ExpandoObject* expando, ::System::Object* oldClass, ::System::Object* newClass);

  /// @brief Method ExpandoTryDeleteValue, addr 0x40faaa8, size 0x98, virtual false, abstract: false, final false
  static inline bool ExpandoTryDeleteValue(::System::Dynamic::ExpandoObject* expando, ::System::Object* indexClass, int32_t index, ::StringW name, bool ignoreCase);

  /// @brief Method ExpandoTryGetValue, addr 0x40fa5ac, size 0x14, virtual false, abstract: false, final false
  static inline bool ExpandoTryGetValue(::System::Dynamic::ExpandoObject* expando, ::System::Object* indexClass, int32_t index, ::StringW name, bool ignoreCase, ::ByRef<::System::Object*> value);

  /// @brief Method ExpandoTrySetValue, addr 0x40fa6e8, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Object* ExpandoTrySetValue(::System::Dynamic::ExpandoObject* expando, ::System::Object* indexClass, int32_t index, ::System::Object* value, ::StringW name, bool ignoreCase);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeOps();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeOps", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeOps(RuntimeOps&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeOps", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeOps(RuntimeOps const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14131 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::RuntimeOps, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeOps);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeOps*, "System.Runtime.CompilerServices", "RuntimeOps");
