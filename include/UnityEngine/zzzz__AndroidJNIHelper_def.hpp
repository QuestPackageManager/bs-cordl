#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNIHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNIHelper)
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
class AndroidJNIHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJNIHelper);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJNIHelper
class CORDL_TYPE AndroidJNIHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method Box, addr 0x483c40c, size 0x100, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(::UnityEngine::jvalue val, ::StringW boxedClass, ::StringW signature);

  /// @brief Method Box, addr 0x483c9b4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(bool value);

  /// @brief Method Box, addr 0x483c94c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(char16_t value);

  /// @brief Method Box, addr 0x483c8e4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(double_t value);

  /// @brief Method Box, addr 0x483c87c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(float_t value);

  /// @brief Method Box, addr 0x483c744, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(int16_t value);

  /// @brief Method Box, addr 0x483c7ac, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(int32_t value);

  /// @brief Method Box, addr 0x483c814, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(int64_t value);

  /// @brief Method Box, addr 0x483c6dc, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(int8_t value);

  /// @brief Method ConvertFromJNIArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ArrayType> static inline ArrayType ConvertFromJNIArray(::System::IntPtr array);

  /// @brief Method ConvertToJNIArray, addr 0x4839ea0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToJNIArray(::System::Array* array);

  /// @brief Method CreateJNIArgArray, addr 0x483aa74, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> CreateJNIArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method CreateJNIArgArray, addr 0x483b084, size 0x110, virtual false, abstract: false, final false
  static inline void CreateJNIArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::Span_1<::UnityEngine::jvalue> jniArgs);

  /// @brief Method CreateJavaProxy, addr 0x4839cfc, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateJavaProxy(::UnityEngine::AndroidJavaProxy* proxy);

  /// @brief Method CreateJavaRunnable, addr 0x4839ca0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* jrunnable);

  /// @brief Method DeleteJNIArgArray, addr 0x483b194, size 0x6c, virtual false, abstract: false, final false
  static inline void DeleteJNIArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> jniArgs);

  /// @brief Method DeleteJNIArgArray, addr 0x483b358, size 0x4, virtual false, abstract: false, final false
  static inline void DeleteJNIArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::Span_1<::UnityEngine::jvalue> jniArgs);

  /// @brief Method GetConstructorID, addr 0x4839504, size 0x48, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetConstructorID(::System::IntPtr javaClass);

  /// @brief Method GetConstructorID, addr 0x483954c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetConstructorID(::System::IntPtr javaClass, ::StringW signature);

  /// @brief Method GetConstructorID, addr 0x483b35c, size 0x20, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetConstructorID(::System::IntPtr jclass, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetFieldID, addr 0x483995c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID(::System::IntPtr javaClass, ::StringW fieldName);

  /// @brief Method GetFieldID, addr 0x48399c0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID(::System::IntPtr javaClass, ::StringW fieldName, ::StringW signature);

  /// @brief Method GetFieldID, addr 0x48399b8, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID(::System::IntPtr javaClass, ::StringW fieldName, ::StringW signature, bool isStatic);

  /// @brief Method GetFieldID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename FieldType> static inline ::System::IntPtr GetFieldID(::System::IntPtr jclass, ::StringW fieldName, bool isStatic);

  /// @brief Method GetMethodID, addr 0x4839718, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr javaClass, ::StringW methodName);

  /// @brief Method GetMethodID, addr 0x483977c, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr javaClass, ::StringW methodName, ::StringW signature);

  /// @brief Method GetMethodID, addr 0x4839774, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr javaClass, ::StringW methodName, ::StringW signature, bool isStatic);

  /// @brief Method GetMethodID, addr 0x483b39c, size 0x38, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool isStatic);

  /// @brief Method GetMethodID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType>
  static inline ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool isStatic);

  /// @brief Method GetSignature, addr 0x483c2e4, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetSignature(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetSignature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType> static inline ::StringW GetSignature(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetSignature, addr 0x483b40c, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetSignature(::System::Object* obj);

  /// @brief Method GetUnboxMethod, addr 0x483ca1c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetUnboxMethod(::System::IntPtr obj, ::StringW methodName, ::StringW signature);

  /// @brief Method Unbox, addr 0x483d328, size 0x8c, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::ByRef<bool> value);

  /// @brief Method Unbox, addr 0x483d228, size 0x88, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::ByRef<char16_t> value);

  /// @brief Method Unbox, addr 0x483d11c, size 0x88, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::ByRef<double_t> value);

  /// @brief Method Unbox, addr 0x483d010, size 0x88, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::ByRef<float_t> value);

  /// @brief Method Unbox, addr 0x483cd10, size 0x88, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::ByRef<int16_t> value);

  /// @brief Method Unbox, addr 0x483ce10, size 0x88, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::ByRef<int32_t> value);

  /// @brief Method Unbox, addr 0x483cf10, size 0x88, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::ByRef<int64_t> value);

  /// @brief Method Unbox, addr 0x483cc10, size 0x88, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::ByRef<int8_t> value);

  /// @brief Method get_debug, addr 0x48394a0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_debug();

  /// @brief Method set_debug, addr 0x48394c8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_debug(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJNIHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNIHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJNIHelper(AndroidJNIHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNIHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJNIHelper(AndroidJNIHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16763 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJNIHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJNIHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJNIHelper*, "UnityEngine", "AndroidJNIHelper");
