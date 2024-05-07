#pragma once
// IWYU pragma private; include "System/Reflection/MonoPropertyInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__PropertyAttributes_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MonoPropertyInfo)
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
struct PropertyAttributes;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
struct MonoPropertyInfo;
}
// Write type traits
MARK_VAL_T(::System::Reflection::MonoPropertyInfo);
// Type: System.Reflection::MonoPropertyInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// CS Name: ::System.Reflection::MonoPropertyInfo
struct CORDL_TYPE MonoPropertyInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoPropertyInfo();

  // Ctor Parameters [CppParam { name: "parent", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "declaring_type", ty: "::System::Type*", modifiers: "", def_value: None },
  // CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "get_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: None }, CppParam {
  // name: "set_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: None }, CppParam { name: "attrs", ty: "::System::Reflection::PropertyAttributes", modifiers: "", def_value:
  // None }]
  constexpr MonoPropertyInfo(::System::Type* parent, ::System::Type* declaring_type, ::StringW name, ::System::Reflection::MethodInfo* get_method, ::System::Reflection::MethodInfo* set_method,
                             ::System::Reflection::PropertyAttributes attrs) noexcept;

  /// @brief Field parent, offset: 0x0, size: 0x8, def value: None
  ::System::Type* parent;

  /// @brief Field declaring_type, offset: 0x8, size: 0x8, def value: None
  ::System::Type* declaring_type;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field get_method, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* get_method;

  /// @brief Field set_method, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* set_method;

  /// @brief Field attrs, offset: 0x28, size: 0x4, def value: None
  ::System::Reflection::PropertyAttributes attrs;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MonoPropertyInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::MonoPropertyInfo, parent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoPropertyInfo, declaring_type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoPropertyInfo, name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoPropertyInfo, get_method) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoPropertyInfo, set_method) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoPropertyInfo, attrs) == 0x28, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoPropertyInfo, "System.Reflection", "MonoPropertyInfo");
