#pragma once
// IWYU pragma private; include "Mono/RuntimeGenericParamInfoHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeGenericParamInfoHandle)
namespace Mono {
struct RuntimeStructs_GenericParamInfo;
}
namespace System::Reflection {
struct GenericParameterAttributes;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Mono {
struct RuntimeGenericParamInfoHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeGenericParamInfoHandle);
// Dependencies
namespace Mono {
// Is value type: true
// CS Name: Mono.RuntimeGenericParamInfoHandle
struct CORDL_TYPE RuntimeGenericParamInfoHandle {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::Reflection::GenericParameterAttributes Attributes;

  __declspec(property(get = get_Constraints)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> Constraints;

  /// @brief Method GetConstraints, addr 0x589851c, size 0x110, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetConstraints();

  /// @brief Method GetConstraintsCount, addr 0x5898644, size 0x40, virtual false, abstract: false, final false
  inline int32_t GetConstraintsCount();

  /// @brief Method .ctor, addr 0x5898510, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method get_Attributes, addr 0x589862c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Reflection::GenericParameterAttributes get_Attributes();

  /// @brief Method get_Constraints, addr 0x5898518, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_Constraints();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeGenericParamInfoHandle();

  // Ctor Parameters [CppParam { name: "value", ty: "::Mono::RuntimeStructs_GenericParamInfo*", modifiers: "", def_value: None }]
  constexpr RuntimeGenericParamInfoHandle(::Mono::RuntimeStructs_GenericParamInfo* value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2230 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::Mono::RuntimeStructs_GenericParamInfo* value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::RuntimeGenericParamInfoHandle, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::RuntimeGenericParamInfoHandle, 0x8>, "Size mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeGenericParamInfoHandle, "Mono", "RuntimeGenericParamInfoHandle");
