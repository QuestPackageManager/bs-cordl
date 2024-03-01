#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(_AndroidJNIHelper)
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine {
class AndroidJavaProxy;
}
namespace UnityEngine {
class AndroidJavaRunnable;
}
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class _AndroidJNIHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::_AndroidJNIHelper);
// Type: UnityEngine::_AndroidJNIHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::_AndroidJNIHelper*
class CORDL_TYPE _AndroidJNIHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method Box, addr 0x2d6a668, size 0x958, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* Box(::System::Object* obj);

  /// @brief Method ConvertFromJNIArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ArrayType> static inline ArrayType ConvertFromJNIArray(void* array);

  /// @brief Method ConvertToJNIArray, addr 0x2d6ec20, size 0x9b4, virtual false, abstract: false, final false
  static inline void* ConvertToJNIArray(::System::Array* array);

  /// @brief Method CreateJNIArgArray, addr 0x2d6e614, size 0x60c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> CreateJNIArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method CreateJavaProxy, addr 0x2d6e0a4, size 0x78, virtual false, abstract: false, final false
  static inline void* CreateJavaProxy(void* delegateHandle, ::UnityEngine::AndroidJavaProxy* proxy);

  /// @brief Method CreateJavaRunnable, addr 0x2d6e11c, size 0x60, virtual false, abstract: false, final false
  static inline void* CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* jrunnable);

  /// @brief Method DeleteJNIArgArray, addr 0x2d6fc70, size 0x160, virtual false, abstract: false, final false
  static inline void DeleteJNIArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> jniArgs);

  /// @brief Method GetConstructorID, addr 0x2d6fe78, size 0x20, virtual false, abstract: false, final false
  static inline void* GetConstructorID(void* jclass, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetConstructorID, addr 0x2d6ffc8, size 0x200, virtual false, abstract: false, final false
  static inline void* GetConstructorID(void* jclass, ::StringW signature);

  /// @brief Method GetFieldID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType> static inline void* GetFieldID(void* jclass, ::StringW fieldName, bool isStatic);

  /// @brief Method GetFieldID, addr 0x2d704d4, size 0x318, virtual false, abstract: false, final false
  static inline void* GetFieldID(void* jclass, ::StringW fieldName, ::StringW signature, bool isStatic);

  /// @brief Method GetMethodID, addr 0x2d6ff90, size 0x38, virtual false, abstract: false, final false
  static inline void* GetMethodID(void* jclass, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool isStatic);

  /// @brief Method GetMethodID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType> static inline void* GetMethodID(void* jclass, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool isStatic);

  /// @brief Method GetMethodID, addr 0x2d701c8, size 0x210, virtual false, abstract: false, final false
  static inline void* GetMethodID(void* jclass, ::StringW methodName, ::StringW signature, bool isStatic);

  /// @brief Method GetMethodIDFallback, addr 0x2d703d8, size 0xfc, virtual false, abstract: false, final false
  static inline void* GetMethodIDFallback(void* jclass, ::StringW methodName, ::StringW signature, bool isStatic);

  /// @brief Method GetSignature, addr 0x2d6fe98, size 0xf4, virtual false, abstract: false, final false
  static inline ::StringW GetSignature(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetSignature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType> static inline ::StringW GetSignature(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetSignature, addr 0x2d70828, size 0xe74, virtual false, abstract: false, final false
  static inline ::StringW GetSignature(::System::Object* obj);

  /// @brief Method InvokeJavaProxyMethod, addr 0x2d6e17c, size 0x498, virtual false, abstract: false, final false
  static inline void* InvokeJavaProxyMethod(::UnityEngine::AndroidJavaProxy* proxy, void* jmethodName, void* jargs);

  static inline ::UnityEngine::_AndroidJNIHelper* New_ctor();

  /// @brief Method Unbox, addr 0x2d6b374, size 0x8f8, virtual false, abstract: false, final false
  static inline ::System::Object* Unbox(::UnityEngine::AndroidJavaObject* obj);

  /// @brief Method UnboxArray, addr 0x2d6f5d8, size 0x698, virtual false, abstract: false, final false
  static inline ::System::Object* UnboxArray(::UnityEngine::AndroidJavaObject* obj);

  /// @brief Method .ctor, addr 0x2d7169c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr _AndroidJNIHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "_AndroidJNIHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  _AndroidJNIHelper(_AndroidJNIHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "_AndroidJNIHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _AndroidJNIHelper(_AndroidJNIHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::_AndroidJNIHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::_AndroidJNIHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::_AndroidJNIHelper*, "UnityEngine", "_AndroidJNIHelper");
