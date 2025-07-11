#pragma once
// IWYU pragma private; include "System/TypedReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypedReference)
namespace System::Reflection {
class FieldInfo;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
}
// Forward declare root types
namespace System {
struct TypedReference;
}
// Write type traits
MARK_VAL_T(::System::TypedReference);
// Dependencies System.IntPtr, System.RuntimeTypeHandle
namespace System {
// Is value type: true
// CS Name: System.TypedReference
struct CORDL_TYPE TypedReference {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Method Equals, addr 0x3e2e474, size 0x50, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x3e2e3e0, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InternalMakeTypedReference, addr 0x3e2e3dc, size 0x4, virtual false, abstract: false, final false
  static inline void InternalMakeTypedReference(::cordl_internals::Ptr<void> result, ::System::Object* target, ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> flds,
                                                ::System::RuntimeType* lastFieldType);

  /// @brief Method MakeTypedReference, addr 0x3e2dfb0, size 0x428, virtual false, abstract: false, final false
  static inline ::System::TypedReference MakeTypedReference(::System::Object* target, ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> flds);

  /// @brief Method SetTypedReference, addr 0x3e2e4e4, size 0x4c, virtual false, abstract: false, final false
  static inline void SetTypedReference(::System::TypedReference target, ::System::Object* value);

  /// @brief Method get_IsNull, addr 0x3e2e4c4, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsNull();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypedReference();

  // Ctor Parameters [CppParam { name: "type", ty: "::System::RuntimeTypeHandle", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "Type", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr TypedReference(::System::RuntimeTypeHandle type, ::System::IntPtr Value, ::System::IntPtr Type) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2573 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field type, offset: 0x0, size: 0x8, def value: None
  ::System::RuntimeTypeHandle type;

  /// @brief Field Value, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr Value;

  /// @brief Field Type, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr Type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TypedReference, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::TypedReference, Value) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::TypedReference, Type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TypedReference, 0x18>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TypedReference, "System", "TypedReference");
