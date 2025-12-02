#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/KnownTypeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KnownTypeAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class KnownTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::KnownTypeAttribute);
// Dependencies System.Attribute
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.KnownTypeAttribute
class CORDL_TYPE KnownTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_MethodName)) ::StringW MethodName;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field methodName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_methodName, put = __cordl_internal_set_methodName)) ::StringW methodName;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  constexpr ::StringW const& __cordl_internal_get_methodName() const;

  constexpr ::StringW& __cordl_internal_get_methodName();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_methodName(::StringW value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method get_MethodName, addr 0x5f3b780, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MethodName();

  /// @brief Method get_Type, addr 0x5f3b788, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KnownTypeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KnownTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KnownTypeAttribute(KnownTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KnownTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KnownTypeAttribute(KnownTypeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17009 };

  /// @brief Field methodName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___methodName;

  /// @brief Field type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::KnownTypeAttribute, ___methodName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::KnownTypeAttribute, ___type) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::KnownTypeAttribute, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::KnownTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::KnownTypeAttribute*, "System.Runtime.Serialization", "KnownTypeAttribute");
