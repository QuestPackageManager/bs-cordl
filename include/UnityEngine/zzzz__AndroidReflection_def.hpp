#pragma once
// IWYU pragma private; include "UnityEngine/AndroidReflection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidReflection)
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GlobalJavaObjectRef;
}
// Forward declare root types
namespace UnityEngine {
class AndroidReflection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidReflection);
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidReflection
class CORDL_TYPE AndroidReflection : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_FieldGetDeclaringClass, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FieldGetDeclaringClass, put = setStaticF_s_FieldGetDeclaringClass)) ::System::IntPtr s_FieldGetDeclaringClass;

  /// @brief Field s_ReflectionHelperCeateInvocationError, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ReflectionHelperCeateInvocationError, put = setStaticF_s_ReflectionHelperCeateInvocationError)) ::System::IntPtr s_ReflectionHelperCeateInvocationError;

  /// @brief Field s_ReflectionHelperClass, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ReflectionHelperClass, put = setStaticF_s_ReflectionHelperClass)) ::UnityEngine::GlobalJavaObjectRef* s_ReflectionHelperClass;

  /// @brief Field s_ReflectionHelperGetConstructorID, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ReflectionHelperGetConstructorID, put = setStaticF_s_ReflectionHelperGetConstructorID)) ::System::IntPtr s_ReflectionHelperGetConstructorID;

  /// @brief Field s_ReflectionHelperGetFieldID, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ReflectionHelperGetFieldID, put = setStaticF_s_ReflectionHelperGetFieldID)) ::System::IntPtr s_ReflectionHelperGetFieldID;

  /// @brief Field s_ReflectionHelperGetFieldSignature, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ReflectionHelperGetFieldSignature, put = setStaticF_s_ReflectionHelperGetFieldSignature)) ::System::IntPtr s_ReflectionHelperGetFieldSignature;

  /// @brief Field s_ReflectionHelperGetMethodID, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ReflectionHelperGetMethodID, put = setStaticF_s_ReflectionHelperGetMethodID)) ::System::IntPtr s_ReflectionHelperGetMethodID;

  /// @brief Field s_ReflectionHelperNewProxyInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ReflectionHelperNewProxyInstance, put = setStaticF_s_ReflectionHelperNewProxyInstance)) ::System::IntPtr s_ReflectionHelperNewProxyInstance;

  /// @brief Method CreateInvocationError, addr 0x685e51c, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateInvocationError(::System::Exception* ex, bool methodNotFound);

  /// @brief Method GetConstructorMember, addr 0x6861088, size 0x1b0, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetConstructorMember(::System::IntPtr jclass, ::StringW signature);

  /// @brief Method GetFieldClass, addr 0x68615b8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldClass(::System::IntPtr field);

  /// @brief Method GetFieldMember, addr 0x68613f8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldMember(::System::IntPtr jclass, ::StringW fieldName, ::StringW signature, bool isStatic);

  /// @brief Method GetFieldSignature, addr 0x6861620, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW GetFieldSignature(::System::IntPtr field);

  /// @brief Method GetMethodID, addr 0x6860fb4, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::StringW clazz, ::StringW methodName, ::StringW signature);

  /// @brief Method GetMethodMember, addr 0x6861238, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodMember(::System::IntPtr jclass, ::StringW methodName, ::StringW signature, bool isStatic);

  /// @brief Method GetStaticMethodID, addr 0x6860ee0, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticMethodID(::StringW clazz, ::StringW methodName, ::StringW signature);

  /// @brief Method IsAssignableFrom, addr 0x6860ec4, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsAssignableFrom(::System::Type* t, ::System::Type* from);

  /// @brief Method IsPrimitive, addr 0x6860ea8, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsPrimitive(::System::Type* t);

  /// @brief Method NewProxyInstance, addr 0x68616d0, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewProxyInstance(::System::IntPtr player, ::System::IntPtr delegateHandle, ::System::IntPtr interfaze);

  static inline ::System::IntPtr getStaticF_s_FieldGetDeclaringClass();

  static inline ::System::IntPtr getStaticF_s_ReflectionHelperCeateInvocationError();

  static inline ::UnityEngine::GlobalJavaObjectRef* getStaticF_s_ReflectionHelperClass();

  static inline ::System::IntPtr getStaticF_s_ReflectionHelperGetConstructorID();

  static inline ::System::IntPtr getStaticF_s_ReflectionHelperGetFieldID();

  static inline ::System::IntPtr getStaticF_s_ReflectionHelperGetFieldSignature();

  static inline ::System::IntPtr getStaticF_s_ReflectionHelperGetMethodID();

  static inline ::System::IntPtr getStaticF_s_ReflectionHelperNewProxyInstance();

  static inline void setStaticF_s_FieldGetDeclaringClass(::System::IntPtr value);

  static inline void setStaticF_s_ReflectionHelperCeateInvocationError(::System::IntPtr value);

  static inline void setStaticF_s_ReflectionHelperClass(::UnityEngine::GlobalJavaObjectRef* value);

  static inline void setStaticF_s_ReflectionHelperGetConstructorID(::System::IntPtr value);

  static inline void setStaticF_s_ReflectionHelperGetFieldID(::System::IntPtr value);

  static inline void setStaticF_s_ReflectionHelperGetFieldSignature(::System::IntPtr value);

  static inline void setStaticF_s_ReflectionHelperGetMethodID(::System::IntPtr value);

  static inline void setStaticF_s_ReflectionHelperNewProxyInstance(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidReflection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidReflection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidReflection(AndroidReflection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidReflection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidReflection(AndroidReflection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19932 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidReflection, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidReflection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidReflection*, "UnityEngine", "AndroidReflection");
