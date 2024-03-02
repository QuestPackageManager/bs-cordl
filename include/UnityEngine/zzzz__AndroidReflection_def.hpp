#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidReflection)
namespace System {
class Exception;
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
// Type: UnityEngine::AndroidReflection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AndroidReflection*
class CORDL_TYPE AndroidReflection : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_FieldGetDeclaringClass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_FieldGetDeclaringClass, put = setStaticF_s_FieldGetDeclaringClass)) void* s_FieldGetDeclaringClass;

  /// @brief Field s_ReflectionHelperClass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ReflectionHelperClass, put = setStaticF_s_ReflectionHelperClass))::UnityEngine::GlobalJavaObjectRef* s_ReflectionHelperClass;

  /// @brief Field s_ReflectionHelperGetConstructorID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ReflectionHelperGetConstructorID, put = setStaticF_s_ReflectionHelperGetConstructorID)) void* s_ReflectionHelperGetConstructorID;

  /// @brief Field s_ReflectionHelperGetFieldID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ReflectionHelperGetFieldID, put = setStaticF_s_ReflectionHelperGetFieldID)) void* s_ReflectionHelperGetFieldID;

  /// @brief Field s_ReflectionHelperGetFieldSignature, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ReflectionHelperGetFieldSignature, put = setStaticF_s_ReflectionHelperGetFieldSignature)) void* s_ReflectionHelperGetFieldSignature;

  /// @brief Field s_ReflectionHelperGetMethodID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ReflectionHelperGetMethodID, put = setStaticF_s_ReflectionHelperGetMethodID)) void* s_ReflectionHelperGetMethodID;

  /// @brief Field s_ReflectionHelperNewProxyInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ReflectionHelperNewProxyInstance, put = setStaticF_s_ReflectionHelperNewProxyInstance)) void* s_ReflectionHelperNewProxyInstance;

  /// @brief Field s_ReflectionHelperSetNativeExceptionOnProxy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ReflectionHelperSetNativeExceptionOnProxy,
                             put = setStaticF_s_ReflectionHelperSetNativeExceptionOnProxy)) void* s_ReflectionHelperSetNativeExceptionOnProxy;

  /// @brief Method GetConstructorMember, addr 0x2d6d690, size 0x18c, virtual false, abstract: false, final false
  static inline void* GetConstructorMember(void* jclass, ::StringW signature);

  /// @brief Method GetFieldClass, addr 0x2d6dc1c, size 0x64, virtual false, abstract: false, final false
  static inline void* GetFieldClass(void* field);

  /// @brief Method GetFieldMember, addr 0x2d6da1c, size 0x200, virtual false, abstract: false, final false
  static inline void* GetFieldMember(void* jclass, ::StringW fieldName, ::StringW signature, bool isStatic);

  /// @brief Method GetFieldSignature, addr 0x2d6dc80, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW GetFieldSignature(void* field);

  /// @brief Method GetMethodID, addr 0x2d6d5f4, size 0x9c, virtual false, abstract: false, final false
  static inline void* GetMethodID(::StringW clazz, ::StringW methodName, ::StringW signature);

  /// @brief Method GetMethodMember, addr 0x2d6d81c, size 0x200, virtual false, abstract: false, final false
  static inline void* GetMethodMember(void* jclass, ::StringW methodName, ::StringW signature, bool isStatic);

  /// @brief Method GetStaticMethodID, addr 0x2d6d558, size 0x9c, virtual false, abstract: false, final false
  static inline void* GetStaticMethodID(::StringW clazz, ::StringW methodName, ::StringW signature);

  /// @brief Method IsAssignableFrom, addr 0x2d6d538, size 0x20, virtual false, abstract: false, final false
  static inline bool IsAssignableFrom(::System::Type* t, ::System::Type* from);

  /// @brief Method IsPrimitive, addr 0x2d6d524, size 0x14, virtual false, abstract: false, final false
  static inline bool IsPrimitive(::System::Type* t);

  /// @brief Method NewProxyInstance, addr 0x2d6dd28, size 0xd0, virtual false, abstract: false, final false
  static inline void* NewProxyInstance(void* delegateHandle, void* interfaze);

  /// @brief Method SetNativeExceptionOnProxy, addr 0x2d6b104, size 0x10c, virtual false, abstract: false, final false
  static inline void SetNativeExceptionOnProxy(void* proxy, ::System::Exception* e, bool methodNotFound);

  static inline void* getStaticF_s_FieldGetDeclaringClass();

  static inline ::UnityEngine::GlobalJavaObjectRef* getStaticF_s_ReflectionHelperClass();

  static inline void* getStaticF_s_ReflectionHelperGetConstructorID();

  static inline void* getStaticF_s_ReflectionHelperGetFieldID();

  static inline void* getStaticF_s_ReflectionHelperGetFieldSignature();

  static inline void* getStaticF_s_ReflectionHelperGetMethodID();

  static inline void* getStaticF_s_ReflectionHelperNewProxyInstance();

  static inline void* getStaticF_s_ReflectionHelperSetNativeExceptionOnProxy();

  static inline void setStaticF_s_FieldGetDeclaringClass(void* value);

  static inline void setStaticF_s_ReflectionHelperClass(::UnityEngine::GlobalJavaObjectRef* value);

  static inline void setStaticF_s_ReflectionHelperGetConstructorID(void* value);

  static inline void setStaticF_s_ReflectionHelperGetFieldID(void* value);

  static inline void setStaticF_s_ReflectionHelperGetFieldSignature(void* value);

  static inline void setStaticF_s_ReflectionHelperGetMethodID(void* value);

  static inline void setStaticF_s_ReflectionHelperNewProxyInstance(void* value);

  static inline void setStaticF_s_ReflectionHelperSetNativeExceptionOnProxy(void* value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidReflection, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidReflection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidReflection*, "UnityEngine", "AndroidReflection");
