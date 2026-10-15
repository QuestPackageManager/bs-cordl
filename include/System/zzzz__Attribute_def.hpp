#pragma once
// IWYU pragma private; include "System/Attribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Attribute)
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Attribute;
}
// Write type traits
MARK_REF_T(::System::Attribute*);
DEFINE_IL2CPP_CLASS(::System::Attribute*, "System", "Attribute");
// [AttributeUsage((System.AttributeTargets)32767, Inherited = true, AllowMultiple = false)]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Attribute
class CORDL_TYPE Attribute : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_TypeId)) ::System::Object* TypeId;

  /// @brief Method AreFieldValuesEqual, addr 0x60cae08, size 0x1a0, virtual false, abstract: false, final false
  static inline bool AreFieldValuesEqual(::System::Object* thisValue, ::System::Object* thatValue);

  /// @brief Method Equals, addr 0x60cabc4, size 0x238, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetCustomAttribute, addr 0x60cab3c, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::Assembly* element, ::System::Type* attributeType);

  /// @brief Method GetCustomAttribute, addr 0x60cab44, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::Assembly* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttribute, addr 0x60c9ff0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo* element, ::System::Type* attributeType);

  /// @brief Method GetCustomAttribute, addr 0x60c9ff8, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x60caa04, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Assembly* element);

  /// @brief Method GetCustomAttributes, addr 0x60ca800, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Assembly* element, ::System::Type* attributeType);

  /// @brief Method GetCustomAttributes, addr 0x60ca808, size 0x1fc, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Assembly* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x60caa0c, size 0x130, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Assembly* element, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x60c9b0c, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::MemberInfo* element);

  /// @brief Method GetCustomAttributes, addr 0x60c9b14, size 0x22c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::MemberInfo* element, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x60c9838, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::MemberInfo* element, ::System::Type* type);

  /// @brief Method GetCustomAttributes, addr 0x60c9840, size 0x2cc, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::MemberInfo* element, ::System::Type* type, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x60ca5f4, size 0x20c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Module* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x60ca4b4, size 0x140, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Module* element, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x60ca078, size 0x27c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::ParameterInfo* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x60ca2f4, size 0x1c0, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::ParameterInfo* element, bool inherit);

  /// @brief Method GetHashCode, addr 0x60cafa8, size 0x13c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InternalGetCustomAttributes, addr 0x60c9150, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> InternalGetCustomAttributes(::System::Reflection::EventInfo* element, ::System::Type* type, bool inherit);

  /// @brief Method InternalGetCustomAttributes, addr 0x60c909c, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> InternalGetCustomAttributes(::System::Reflection::PropertyInfo* element, ::System::Type* type, bool inherit);

  /// @brief Method InternalIsDefined, addr 0x60c97c4, size 0x74, virtual false, abstract: false, final false
  static inline bool InternalIsDefined(::System::Reflection::EventInfo* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method InternalIsDefined, addr 0x60c9750, size 0x74, virtual false, abstract: false, final false
  static inline bool InternalIsDefined(::System::Reflection::PropertyInfo* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method InternalParamGetCustomAttributes, addr 0x60c9204, size 0x54c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*> InternalParamGetCustomAttributes(::System::Reflection::ParameterInfo* parameter, ::System::Type* attributeType, bool inherit);

  /// @brief Method IsDefaultAttribute, addr 0x60cb0fc, size 0x8, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  /// @brief Method IsDefined, addr 0x60c9d40, size 0x8, virtual false, abstract: false, final false
  static inline bool IsDefined(::System::Reflection::MemberInfo* element, ::System::Type* attributeType);

  /// @brief Method IsDefined, addr 0x60c9d48, size 0x2a8, virtual false, abstract: false, final false
  static inline bool IsDefined(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method Match, addr 0x60cb0f0, size 0xc, virtual true, abstract: false, final false
  inline bool Match(::System::Object* obj);

  static inline ::System::Attribute* New_ctor();

  /// @brief Method .ctor, addr 0x60c6ac0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TypeId, addr 0x60cb0e4, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* get_TypeId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Attribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Attribute(Attribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Attribute(Attribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2557 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Attribute) == 0x10, "Size mismatch!");

} // namespace System
