#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/TypeHandleRef.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
CORDL_MODULE_EXPORT(TypeHandleRef)
namespace System {
struct RuntimeTypeHandle;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class TypeHandleRef;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::TypeHandleRef);
// Dependencies System.Object, System.RuntimeTypeHandle
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.TypeHandleRef
class CORDL_TYPE TypeHandleRef : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Value, put = set_Value)) ::System::RuntimeTypeHandle Value;

  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::RuntimeTypeHandle value;

  static inline ::System::Runtime::Serialization::TypeHandleRef* New_ctor();

  static inline ::System::Runtime::Serialization::TypeHandleRef* New_ctor(::System::RuntimeTypeHandle value);

  constexpr ::System::RuntimeTypeHandle const& __cordl_internal_get_value() const;

  constexpr ::System::RuntimeTypeHandle& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::System::RuntimeTypeHandle value);

  /// @brief Method .ctor, addr 0x5f93208, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5f93e30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::RuntimeTypeHandle value);

  /// @brief Method get_Value, addr 0x5f969b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::RuntimeTypeHandle get_Value();

  /// @brief Method set_Value, addr 0x5f969c0, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::System::RuntimeTypeHandle value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeHandleRef();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeHandleRef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeHandleRef(TypeHandleRef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeHandleRef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeHandleRef(TypeHandleRef const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16988 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::RuntimeTypeHandle ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::TypeHandleRef, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::TypeHandleRef, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::TypeHandleRef);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::TypeHandleRef*, "System.Runtime.Serialization", "TypeHandleRef");
