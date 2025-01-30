#pragma once
// IWYU pragma private; include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
MARK_REF_PTR_T(::System::Attribute);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Attribute
class CORDL_TYPE Attribute : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_TypeId)) ::System::Object* TypeId;

  /// @brief Method AreFieldValuesEqual, addr 0x3e19cc4, size 0x1ec, virtual false, abstract: false, final false
  static inline bool AreFieldValuesEqual(::System::Object* thisValue, ::System::Object* thatValue);

  /// @brief Method Equals, addr 0x3e19a70, size 0x248, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetCustomAttribute, addr 0x3e199dc, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::Assembly* element, ::System::Type* attributeType);

  /// @brief Method GetCustomAttribute, addr 0x3e199e4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::Assembly* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttribute, addr 0x3e18db8, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo* element, ::System::Type* attributeType);

  /// @brief Method GetCustomAttribute, addr 0x3e18dc0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3e198a4, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributes(::System::Reflection::Assembly* element);

  /// @brief Method GetCustomAttributes, addr 0x3e19670, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributes(::System::Reflection::Assembly* element, ::System::Type* attributeType);

  /// @brief Method GetCustomAttributes, addr 0x3e19678, size 0x22c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributes(::System::Reflection::Assembly* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3e198ac, size 0x130, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributes(::System::Reflection::Assembly* element, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3e18894, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributes(::System::Reflection::MemberInfo* element);

  /// @brief Method GetCustomAttributes, addr 0x3e1889c, size 0x240, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributes(::System::Reflection::MemberInfo* element, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3e18598, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributes(::System::Reflection::MemberInfo* element, ::System::Type* type);

  /// @brief Method GetCustomAttributes, addr 0x3e185a0, size 0x2f4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributes(::System::Reflection::MemberInfo* element, ::System::Type* type, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3e19420, size 0x250, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributes(::System::Reflection::Module* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3e192c4, size 0x15c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributes(::System::Reflection::Module* element, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3e18e4c, size 0x2b4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributes(::System::Reflection::ParameterInfo* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3e19100, size 0x1c4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributes(::System::Reflection::ParameterInfo* element, bool inherit);

  /// @brief Method GetHashCode, addr 0x3e19eb0, size 0x134, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InternalGetCustomAttributes, addr 0x3e17ef4, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> InternalGetCustomAttributes(::System::Reflection::EventInfo* element, ::System::Type* type, bool inherit);

  /// @brief Method InternalGetCustomAttributes, addr 0x3e17e48, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> InternalGetCustomAttributes(::System::Reflection::PropertyInfo* element, ::System::Type* type, bool inherit);

  /// @brief Method InternalIsDefined, addr 0x3e18528, size 0x70, virtual false, abstract: false, final false
  static inline bool InternalIsDefined(::System::Reflection::EventInfo* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method InternalIsDefined, addr 0x3e184b8, size 0x70, virtual false, abstract: false, final false
  static inline bool InternalIsDefined(::System::Reflection::PropertyInfo* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method InternalParamGetCustomAttributes, addr 0x3e17fa0, size 0x518, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> InternalParamGetCustomAttributes(::System::Reflection::ParameterInfo* parameter, ::System::Type* attributeType,
                                                                                                                bool inherit);

  /// @brief Method IsDefaultAttribute, addr 0x3e19ff8, size 0x8, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  /// @brief Method IsDefined, addr 0x3e18adc, size 0x8, virtual false, abstract: false, final false
  static inline bool IsDefined(::System::Reflection::MemberInfo* element, ::System::Type* attributeType);

  /// @brief Method IsDefined, addr 0x3e18ae4, size 0x2d4, virtual false, abstract: false, final false
  static inline bool IsDefined(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method Match, addr 0x3e19fec, size 0xc, virtual true, abstract: false, final false
  inline bool Match(::System::Object* obj);

  static inline ::System::Attribute* New_ctor();

  /// @brief Method .ctor, addr 0x3e15730, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TypeId, addr 0x3e19fe4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_TypeId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Attribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Attribute(Attribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Attribute(Attribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2548 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Attribute, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Attribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Attribute*, "System", "Attribute");
