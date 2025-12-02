#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/CodeInterpreter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CodeInterpreter)
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class CodeInterpreter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::CodeInterpreter);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.CodeInterpreter
class CORDL_TYPE CodeInterpreter : public ::System::Object {
public:
  // Declarations
  /// @brief Method CanConvert, addr 0x5f5f950, size 0x10, virtual false, abstract: false, final false
  static inline bool CanConvert(::System::TypeCode typeCode);

  /// @brief Method ConvertValue, addr 0x5f5f6f0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Object* ConvertValue(::System::Object* arg, ::System::Type* source, ::System::Type* target);

  /// @brief Method GetMember, addr 0x5f5f960, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Object* GetMember(::System::Reflection::MemberInfo* memberInfo, ::System::Object* instance);

  /// @brief Method InternalConvert, addr 0x5f5f6f8, size 0x258, virtual false, abstract: false, final false
  static inline ::System::Object* InternalConvert(::System::Object* arg, ::System::Type* source, ::System::Type* target, bool isAddress);

  /// @brief Method SetMember, addr 0x5f5fa5c, size 0x104, virtual false, abstract: false, final false
  static inline void SetMember(::System::Reflection::MemberInfo* memberInfo, ::System::Object* instance, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodeInterpreter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CodeInterpreter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodeInterpreter(CodeInterpreter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodeInterpreter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodeInterpreter(CodeInterpreter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17104 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CodeInterpreter, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::CodeInterpreter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CodeInterpreter*, "System.Runtime.Serialization", "CodeInterpreter");
