#pragma once
// IWYU pragma private; include "UnityEngine/_AndroidJNIHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(_AndroidJNIHelper)
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct Span_1;
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
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine._AndroidJNIHelper
class CORDL_TYPE _AndroidJNIHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field FRAME_SIZE_FOR_ARRAYS, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_FRAME_SIZE_FOR_ARRAYS, put = setStaticF_FRAME_SIZE_FOR_ARRAYS)) int32_t FRAME_SIZE_FOR_ARRAYS;

  /// @brief Method Box, addr 0x67f60c8, size 0x8dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* Box(::System::Object* obj);

  /// @brief Method ConvertFromJNIArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ArrayType> static inline ArrayType ConvertFromJNIArray(::System::IntPtr array);

  /// @brief Method ConvertToJNIArray, addr 0x67e77a8, size 0xcb4, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToJNIArray(::System::Array* array);

  /// @brief Method CreateJNIArgArray, addr 0x67e8524, size 0x510, virtual false, abstract: false, final false
  static inline void CreateJNIArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::Span_1<::UnityEngine::jvalue> ret);

  /// @brief Method CreateJavaProxy, addr 0x67e76c4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateJavaProxy(::System::IntPtr player, ::System::IntPtr delegateHandle, ::UnityEngine::AndroidJavaProxy* proxy);

  /// @brief Method CreateJavaRunnable, addr 0x67e750c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* jrunnable);

  /// @brief Method DeleteJNIArgArray, addr 0x67e8bfc, size 0x170, virtual false, abstract: false, final false
  static inline void DeleteJNIArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::Span_1<::UnityEngine::jvalue> jniArgs);

  /// @brief Method GetConstructorID, addr 0x67e8e44, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetConstructorID(::System::IntPtr jclass, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetConstructorID, addr 0x67e6c04, size 0x1fc, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetConstructorID(::System::IntPtr jclass, ::StringW signature);

  /// @brief Method GetFieldID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType> static inline ::System::IntPtr GetFieldID(::System::IntPtr jclass, ::StringW fieldName, bool isStatic);

  /// @brief Method GetFieldID, addr 0x67e71f8, size 0x2bc, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID(::System::IntPtr jclass, ::StringW fieldName, ::StringW signature, bool isStatic);

  /// @brief Method GetMethodID, addr 0x67e8f34, size 0x88, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool isStatic);

  /// @brief Method GetMethodID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType>
  static inline ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool isStatic);

  /// @brief Method GetMethodID, addr 0x67e6ee8, size 0x228, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::StringW signature, bool isStatic);

  /// @brief Method GetMethodIDFallback, addr 0x67fa8a8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodIDFallback(::System::IntPtr jclass, ::StringW methodName, ::StringW signature, bool isStatic);

  /// @brief Method GetSignature, addr 0x67e9e78, size 0x164, virtual false, abstract: false, final false
  static inline ::StringW GetSignature(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetSignature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType> static inline ::StringW GetSignature(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetSignature, addr 0x67e9014, size 0xe0c, virtual false, abstract: false, final false
  static inline ::StringW GetSignature(::System::Object* obj);

  /// @brief Method InvokeJavaProxyMethod, addr 0x67f9f54, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::IntPtr InvokeJavaProxyMethod(::UnityEngine::AndroidJavaProxy* proxy, ::System::IntPtr jmethodName, ::System::IntPtr jargs);

  static inline ::UnityEngine::_AndroidJNIHelper* New_ctor();

  /// @brief Method Unbox, addr 0x67f6da0, size 0xa14, virtual false, abstract: false, final false
  static inline ::System::Object* Unbox(::UnityEngine::AndroidJavaObject* obj);

  /// @brief Method UnboxArray, addr 0x67fa044, size 0x864, virtual false, abstract: false, final false
  static inline ::System::Object* UnboxArray(::UnityEngine::AndroidJavaObject* obj);

  /// @brief Method .ctor, addr 0x67fa940, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_FRAME_SIZE_FOR_ARRAYS();

  static inline void setStaticF_FRAME_SIZE_FOR_ARRAYS(int32_t value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19906 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::_AndroidJNIHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::_AndroidJNIHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::_AndroidJNIHelper*, "UnityEngine", "_AndroidJNIHelper");
