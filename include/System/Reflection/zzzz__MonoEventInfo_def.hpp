#pragma once
// IWYU pragma private; include "System/Reflection/MonoEventInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__EventAttributes_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MonoEventInfo)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
struct MonoEventInfo;
}
// Write type traits
MARK_VAL_T(::System::Reflection::MonoEventInfo);
// Dependencies System.Reflection.EventAttributes
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.MonoEventInfo
struct CORDL_TYPE MonoEventInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoEventInfo();

  // Ctor Parameters [CppParam { name: "declaring_type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "reflected_type", ty: "::System::Type*", modifiers: "", def_value:
  // None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "add_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: None },
  // CppParam { name: "remove_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: None }, CppParam { name: "raise_method", ty: "::System::Reflection::MethodInfo*", modifiers:
  // "", def_value: None }, CppParam { name: "attrs", ty: "::System::Reflection::EventAttributes", modifiers: "", def_value: None }, CppParam { name: "other_methods", ty:
  // "::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*>", modifiers: "", def_value: None }]
  constexpr MonoEventInfo(::System::Type* declaring_type, ::System::Type* reflected_type, ::StringW name, ::System::Reflection::MethodInfo* add_method, ::System::Reflection::MethodInfo* remove_method,
                          ::System::Reflection::MethodInfo* raise_method, ::System::Reflection::EventAttributes attrs,
                          ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> other_methods) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3521 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field declaring_type, offset: 0x0, size: 0x8, def value: None
  ::System::Type* declaring_type;

  /// @brief Field reflected_type, offset: 0x8, size: 0x8, def value: None
  ::System::Type* reflected_type;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field add_method, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* add_method;

  /// @brief Field remove_method, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* remove_method;

  /// @brief Field raise_method, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* raise_method;

  /// @brief Field attrs, offset: 0x30, size: 0x4, def value: None
  ::System::Reflection::EventAttributes attrs;

  /// @brief Field other_methods, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> other_methods;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::MonoEventInfo, declaring_type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoEventInfo, reflected_type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoEventInfo, name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoEventInfo, add_method) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoEventInfo, remove_method) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoEventInfo, raise_method) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoEventInfo, attrs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoEventInfo, other_methods) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::MonoEventInfo, 0x40>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoEventInfo, "System.Reflection", "MonoEventInfo");
