#pragma once
// IWYU pragma private; include "UnityEngine/_AndroidJNIHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  /// @brief Method Box, addr 0x484ae40, size 0x9b4, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* Box(::System::Object* obj);

  /// @brief Method ConvertFromJNIArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ArrayType> static inline ArrayType ConvertFromJNIArray(::System::IntPtr array);

  /// @brief Method ConvertToJNIArray, addr 0x483e398, size 0xbd0, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToJNIArray(::System::Array* array);

  /// @brief Method CreateJNIArgArray, addr 0x483eff8, size 0x580, virtual false, abstract: false, final false
  static inline void CreateJNIArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::Span_1<::UnityEngine::jvalue> ret);

  /// @brief Method CreateJavaProxy, addr 0x483e30c, size 0x88, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateJavaProxy(::System::IntPtr player, ::System::IntPtr delegateHandle, ::UnityEngine::AndroidJavaProxy* proxy);

  /// @brief Method CreateJavaRunnable, addr 0x483e198, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* jrunnable);

  /// @brief Method DeleteJNIArgArray, addr 0x483f6f4, size 0x158, virtual false, abstract: false, final false
  static inline void DeleteJNIArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::Span_1<::UnityEngine::jvalue> jniArgs);

  /// @brief Method GetConstructorID, addr 0x483f870, size 0x20, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetConstructorID(::System::IntPtr jclass, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetConstructorID, addr 0x483da44, size 0x1c8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetConstructorID(::System::IntPtr jclass, ::StringW signature);

  /// @brief Method GetFieldID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType> static inline ::System::IntPtr GetFieldID(::System::IntPtr jclass, ::StringW fieldName, bool isStatic);

  /// @brief Method GetFieldID, addr 0x483debc, size 0x2d8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID(::System::IntPtr jclass, ::StringW fieldName, ::StringW signature, bool isStatic);

  /// @brief Method GetMethodID, addr 0x483f8c8, size 0x38, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool isStatic);

  /// @brief Method GetMethodID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType>
  static inline ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool isStatic);

  /// @brief Method GetMethodID, addr 0x483dc78, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::StringW signature, bool isStatic);

  /// @brief Method GetMethodIDFallback, addr 0x484f2ec, size 0x94, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodIDFallback(::System::IntPtr jclass, ::StringW methodName, ::StringW signature, bool isStatic);

  /// @brief Method GetSignature, addr 0x48407dc, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW GetSignature(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetSignature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType> static inline ::StringW GetSignature(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetSignature, addr 0x483f904, size 0xed4, virtual false, abstract: false, final false
  static inline ::StringW GetSignature(::System::Object* obj);

  /// @brief Method InvokeJavaProxyMethod, addr 0x484ea28, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::IntPtr InvokeJavaProxyMethod(::UnityEngine::AndroidJavaProxy* proxy, ::System::IntPtr jmethodName, ::System::IntPtr jargs);

  static inline ::UnityEngine::_AndroidJNIHelper* New_ctor();

  /// @brief Method Unbox, addr 0x484bb68, size 0xbb0, virtual false, abstract: false, final false
  static inline ::System::Object* Unbox(::UnityEngine::AndroidJavaObject* obj);

  /// @brief Method UnboxArray, addr 0x484eb54, size 0x798, virtual false, abstract: false, final false
  static inline ::System::Object* UnboxArray(::UnityEngine::AndroidJavaObject* obj);

  /// @brief Method .ctor, addr 0x484f380, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16767 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::_AndroidJNIHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::_AndroidJNIHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::_AndroidJNIHelper*, "UnityEngine", "_AndroidJNIHelper");
