#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypedReference)
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
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
// Type: System::TypedReference
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::TypedReference
struct CORDL_TYPE TypedReference {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Method Equals, addr 0x2746a94, size 0x58, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x27469dc, size 0xac, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InternalMakeTypedReference, addr 0x27469d8, size 0x4, virtual false, abstract: false, final false
  static inline void InternalMakeTypedReference(::cordl_internals::Ptr<void> result, ::System::Object* target, ::ArrayW<void*, ::Array<void*>*> flds, ::System::RuntimeType* lastFieldType);

  /// @brief Method MakeTypedReference, addr 0x274658c, size 0x448, virtual false, abstract: false, final false
  static inline ::System::TypedReference MakeTypedReference(::System::Object* target, ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> flds);

  /// @brief Method SetTypedReference, addr 0x2746b58, size 0x50, virtual false, abstract: false, final false
  static inline void SetTypedReference(::System::TypedReference target, ::System::Object* value);

  /// @brief Method get_IsNull, addr 0x2746aec, size 0x6c, virtual false, abstract: false, final false
  inline bool get_IsNull();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypedReference();

  // Ctor Parameters [CppParam { name: "type", ty: "::System::RuntimeTypeHandle", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "void*", modifiers: "", def_value: None }, CppParam {
  // name: "Type", ty: "void*", modifiers: "", def_value: None }]
  constexpr TypedReference(::System::RuntimeTypeHandle type, void* Value, void* Type) noexcept;

  /// @brief Field type, offset: 0x0, size: 0x8, def value: None
  ::System::RuntimeTypeHandle type;

  /// @brief Field Value, offset: 0x8, size: 0x8, def value: None
  void* Value;

  /// @brief Field Type, offset: 0x10, size: 0x8, def value: None
  void* Type;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypedReference, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::TypedReference, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::TypedReference, Value) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::TypedReference, Type) == 0x10, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TypedReference, "System", "TypedReference");
