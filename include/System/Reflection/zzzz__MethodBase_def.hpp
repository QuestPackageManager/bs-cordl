#pragma once
// IWYU pragma private; include "System/Reflection/MethodBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodBase)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class MethodBase;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::MethodBase);
// Dependencies System.Reflection.MemberInfo
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.MethodBase
class CORDL_TYPE MethodBase : public ::System::Reflection::MemberInfo {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::Reflection::MethodAttributes Attributes;

  __declspec(property(get = get_CallingConvention)) ::System::Reflection::CallingConventions CallingConvention;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_IsAbstract)) bool IsAbstract;

  __declspec(property(get = get_IsConstructor)) bool IsConstructor;

  __declspec(property(get = get_IsGenericMethod)) bool IsGenericMethod;

  __declspec(property(get = get_IsGenericMethodDefinition)) bool IsGenericMethodDefinition;

  __declspec(property(get = get_IsPublic)) bool IsPublic;

  __declspec(property(get = get_IsSecurityCritical)) bool IsSecurityCritical;

  __declspec(property(get = get_IsSpecialName)) bool IsSpecialName;

  __declspec(property(get = get_IsStatic)) bool IsStatic;

  __declspec(property(get = get_IsVirtual)) bool IsVirtual;

  __declspec(property(get = get_MethodHandle)) ::System::RuntimeMethodHandle MethodHandle;

  /// @brief Method ConstructParameters, addr 0x3d245e8, size 0x1f8, virtual false, abstract: false, final false
  static inline ::StringW ConstructParameters(::ArrayW<::System::Type*, ::Array<::System::Type*>*> parameterTypes, ::System::Reflection::CallingConventions callingConvention, bool serialization);

  /// @brief Method Equals, addr 0x3d22220, size 0x8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method FormatNameAndSig, addr 0x3d244c4, size 0x124, virtual true, abstract: false, final false
  inline ::StringW FormatNameAndSig(bool serialization);

  /// @brief Method GetGenericArguments, addr 0x3d24388, size 0x4c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method GetHashCode, addr 0x3d22230, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetMethodFromHandle, addr 0x3d248f8, size 0x1e0, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandle(::System::RuntimeMethodHandle handle);

  /// @brief Method GetMethodImplementationFlags, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();

  /// @brief Method GetParameterTypes, addr 0x3d247e0, size 0x108, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetParameterTypes();

  /// @brief Method GetParameters, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParameters();

  /// @brief Method GetParametersCount, addr 0x3d2449c, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetParametersCount();

  /// @brief Method GetParametersInternal, addr 0x3d2448c, size 0x10, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersInternal();

  /// @brief Method GetParametersNoCopy, addr 0x3d248e8, size 0x10, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersNoCopy();

  /// @brief Method Invoke, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture);

  /// @brief Method Invoke, addr 0x3d243dc, size 0x20, virtual true, abstract: false, final true
  inline ::System::Object* Invoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  static inline ::System::Reflection::MethodBase* New_ctor();

  /// @brief Method .ctor, addr 0x3d221e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Attributes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodAttributes get_Attributes();

  /// @brief Method get_CallingConvention, addr 0x3d24224, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::CallingConventions get_CallingConvention();

  /// @brief Method get_ContainsGenericParameters, addr 0x3d243d4, size 0x8, virtual true, abstract: false, final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_IsAbstract, addr 0x3d2422c, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsAbstract();

  /// @brief Method get_IsConstructor, addr 0x3d2424c, size 0xa4, virtual true, abstract: false, final true
  inline bool get_IsConstructor();

  /// @brief Method get_IsGenericMethod, addr 0x3d24378, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericMethod();

  /// @brief Method get_IsGenericMethodDefinition, addr 0x3d24380, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericMethodDefinition();

  /// @brief Method get_IsPublic, addr 0x3d24350, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsPublic();

  /// @brief Method get_IsSecurityCritical, addr 0x3d243fc, size 0x28, virtual true, abstract: false, final false
  inline bool get_IsSecurityCritical();

  /// @brief Method get_IsSpecialName, addr 0x3d24310, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsSpecialName();

  /// @brief Method get_IsStatic, addr 0x3d242f0, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsStatic();

  /// @brief Method get_IsVirtual, addr 0x3d24330, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsVirtual();

  /// @brief Method get_MethodHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::RuntimeMethodHandle get_MethodHandle();

  /// @brief Method op_Equality, addr 0x3d23ff0, size 0x1b4, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::MethodBase* left, ::System::Reflection::MethodBase* right);

  /// @brief Method op_Inequality, addr 0x3d23fd8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Reflection::MethodBase* left, ::System::Reflection::MethodBase* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodBase(MethodBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodBase(MethodBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3479 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MethodBase, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::MethodBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodBase*, "System.Reflection", "MethodBase");
