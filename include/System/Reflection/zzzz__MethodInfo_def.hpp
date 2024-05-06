#pragma once
// IWYU pragma private; include "System/Reflection/MethodInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
MARK_REF_PTR_T(::System::Reflection::MethodInfo);
// Type: System.Reflection::MethodInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::MethodInfo*
class CORDL_TYPE MethodInfo : public ::System::Reflection::MethodBase {
public:
  // Declarations
  __declspec(property(get = get_GenericParameterCount)) int32_t GenericParameterCount;

  __declspec(property(get = get_MemberType))::System::Reflection::MemberTypes MemberType;

  __declspec(property(get = get_ReturnParameter))::System::Reflection::ParameterInfo* ReturnParameter;

  __declspec(property(get = get_ReturnType))::System::Type* ReturnType;

  /// @brief Method CreateDelegate, addr 0x2868650, size 0x50, virtual true, abstract: false, final false
  inline ::System::Delegate* CreateDelegate(::System::Type* delegateType);

  /// @brief Method CreateDelegate, addr 0x28686a0, size 0x50, virtual true, abstract: false, final false
  inline ::System::Delegate* CreateDelegate(::System::Type* delegateType, ::System::Object* target);

  /// @brief Method Equals, addr 0x28686f0, size 0x8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetBaseDefinition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::MethodInfo* GetBaseDefinition();

  /// @brief Method GetGenericArguments, addr 0x2868560, size 0x50, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method GetGenericMethodDefinition, addr 0x28685b0, size 0x50, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition();

  /// @brief Method GetHashCode, addr 0x28686f8, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method MakeGenericMethod, addr 0x2868600, size 0x50, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* MakeGenericMethod(::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArguments);

  static inline ::System::Reflection::MethodInfo* New_ctor();

  /// @brief Method .ctor, addr 0x2868500, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GenericParameterCount, addr 0x2868700, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_GenericParameterCount();

  /// @brief Method get_MemberType, addr 0x2868508, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method get_ReturnParameter, addr 0x2868510, size 0x28, virtual true, abstract: false, final false
  inline ::System::Reflection::ParameterInfo* get_ReturnParameter();

  /// @brief Method get_ReturnType, addr 0x2868538, size 0x28, virtual true, abstract: false, final false
  inline ::System::Type* get_ReturnType();

  /// @brief Method op_Equality, addr 0x2867e64, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo* right);

  /// @brief Method op_Inequality, addr 0x2867e28, size 0x3c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodInfo(MethodInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodInfo(MethodInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MethodInfo, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::MethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodInfo*, "System.Reflection", "MethodInfo");
