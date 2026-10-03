#pragma once
// IWYU pragma private; include "System/Reflection/MethodInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodInfo)
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class MethodInfo;
}
// Write type traits
MARK_REF_T(::System::Reflection::MethodInfo*);
DEFINE_IL2CPP_CLASS(::System::Reflection::MethodInfo*, "System.Reflection", "MethodInfo");
// Dependencies System.Reflection.MethodBase
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.MethodInfo
class CORDL_TYPE MethodInfo : public ::System::Reflection::MethodBase {
public:
  // Declarations
  __declspec(property(get = get_GenericParameterCount)) int32_t GenericParameterCount;

  __declspec(property(get = get_MemberType)) ::System::Reflection::MemberTypes MemberType;

  __declspec(property(get = get_ReturnParameter)) ::System::Reflection::ParameterInfo* ReturnParameter;

  __declspec(property(get = get_ReturnType)) ::System::Type* ReturnType;

  /// @brief Method CreateDelegate, addr 0x5f97fb4, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Delegate* CreateDelegate(::System::Type* delegateType);

  /// @brief Method CreateDelegate, addr 0x5f98000, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Delegate* CreateDelegate(::System::Type* delegateType, ::System::Object* target);

  /// @brief Method Equals, addr 0x5f9804c, size 0xc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetBaseDefinition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::MethodInfo* GetBaseDefinition();

  /// @brief Method GetGenericArguments, addr 0x5f97ed0, size 0x4c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*> GetGenericArguments();

  /// @brief Method GetGenericMethodDefinition, addr 0x5f97f1c, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition();

  /// @brief Method GetHashCode, addr 0x5f98058, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method MakeGenericMethod, addr 0x5f97f68, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* MakeGenericMethod(/* [ParamArray] */ ::ArrayW<::System::Type*> typeArguments);

  static inline ::System::Reflection::MethodInfo* New_ctor();

  /// @brief Method .ctor, addr 0x5f97e74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GenericParameterCount, addr 0x5f9806c, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_GenericParameterCount();

  /// @brief Method get_MemberType, addr 0x5f97e78, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method get_ReturnParameter, addr 0x5f97e80, size 0x28, virtual true, abstract: false, final false
  inline ::System::Reflection::ParameterInfo* get_ReturnParameter();

  /// @brief Method get_ReturnType, addr 0x5f97ea8, size 0x28, virtual true, abstract: false, final false
  inline ::System::Type* get_ReturnType();

  /// @brief Method op_Equality, addr 0x5f97804, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo* right);

  /// @brief Method op_Inequality, addr 0x5f977c8, size 0x3c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodInfo", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodInfo(MethodInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodInfo", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodInfo(MethodInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3503 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Reflection::MethodInfo) == 0x10, "Size mismatch!");

} // namespace System::Reflection
