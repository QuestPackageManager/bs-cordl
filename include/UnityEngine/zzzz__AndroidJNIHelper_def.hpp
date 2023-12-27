#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNIHelper)
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct jvalue;
}
namespace UnityEngine {
class AndroidJavaProxy;
}
namespace UnityEngine {
class AndroidJavaRunnable;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNIHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJNIHelper);
// Type: UnityEngine::AndroidJNIHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14918))
// CS Name: ::UnityEngine::AndroidJNIHelper*
class CORDL_TYPE AndroidJNIHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_debug addr 0x2c8ba64 size 0x28 virtual false final false
  static inline bool get_debug();

  /// @brief Method set_debug addr 0x2c8ba8c size 0x3c virtual false final false
  static inline void set_debug(bool value);

  /// @brief Method GetConstructorID addr 0x2c8bac8 size 0x48 virtual false final false
  static inline void* GetConstructorID(void* javaClass);

  /// @brief Method GetConstructorID addr 0x2c8a34c size 0x4 virtual false final false
  static inline void* GetConstructorID(void* javaClass, ::StringW signature);

  /// @brief Method GetMethodID addr 0x2c8bb10 size 0x5c virtual false final false
  static inline void* GetMethodID(void* javaClass, ::StringW methodName);

  /// @brief Method GetMethodID addr 0x2c8bb6c size 0x8 virtual false final false
  static inline void* GetMethodID(void* javaClass, ::StringW methodName, ::StringW signature);

  /// @brief Method GetMethodID addr 0x2c86604 size 0x8 virtual false final false
  static inline void* GetMethodID(void* javaClass, ::StringW methodName, ::StringW signature, bool isStatic);

  /// @brief Method GetFieldID addr 0x2c8bb74 size 0x5c virtual false final false
  static inline void* GetFieldID(void* javaClass, ::StringW fieldName);

  /// @brief Method GetFieldID addr 0x2c8bbd8 size 0x8 virtual false final false
  static inline void* GetFieldID(void* javaClass, ::StringW fieldName, ::StringW signature);

  /// @brief Method GetFieldID addr 0x2c8bbd0 size 0x8 virtual false final false
  static inline void* GetFieldID(void* javaClass, ::StringW fieldName, ::StringW signature, bool isStatic);

  /// @brief Method CreateJavaRunnable addr 0x2c89994 size 0x4 virtual false final false
  static inline void* CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* jrunnable);

  /// @brief Method CreateJavaProxy addr 0x2c86418 size 0xbc virtual false final false
  static inline void* CreateJavaProxy(::UnityEngine::AndroidJavaProxy* proxy);

  /// @brief Method ConvertToJNIArray addr 0x2c8bbe0 size 0x4 virtual false final false
  static inline void* ConvertToJNIArray(::System::Array* array);

  /// @brief Method CreateJNIArgArray addr 0x2c8750c size 0x4 virtual false final false
  static inline ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> CreateJNIArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method DeleteJNIArgArray addr 0x2c8bbe4 size 0x4 virtual false final false
  static inline void DeleteJNIArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> jniArgs);

  /// @brief Method GetConstructorID addr 0x2c87510 size 0x20 virtual false final false
  static inline void* GetConstructorID(void* jclass, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetMethodID addr 0x2c87724 size 0x38 virtual false final false
  static inline void* GetMethodID(void* jclass, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool isStatic);

  /// @brief Method GetSignature addr 0x2c8bbe8 size 0x4 virtual false final false
  static inline ::StringW GetSignature(::System::Object* obj);

  /// @brief Method GetSignature addr 0x2c8bbec size 0x4 virtual false final false
  static inline ::StringW GetSignature(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method ConvertFromJNIArray addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename ArrayType> static inline ArrayType ConvertFromJNIArray(void* array);

  /// @brief Method GetMethodID addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename ReturnType> static inline void* GetMethodID(void* jclass, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool isStatic);

  /// @brief Method GetFieldID addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename FieldType> static inline void* GetFieldID(void* jclass, ::StringW fieldName, bool isStatic);

  /// @brief Method GetSignature addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename ReturnType> static inline ::StringW GetSignature(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNIHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJNIHelper(AndroidJNIHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNIHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJNIHelper(AndroidJNIHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJNIHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJNIHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJNIHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJNIHelper*, "UnityEngine", "AndroidJNIHelper");
