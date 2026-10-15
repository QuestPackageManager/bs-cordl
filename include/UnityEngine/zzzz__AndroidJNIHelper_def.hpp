#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNIHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::UnityEngine::AndroidJNIHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AndroidJNIHelper*, "UnityEngine", "AndroidJNIHelper");
// [NativeConditional("PLATFORM_ANDROID")]
// [StaticAccessor("AndroidJNIBindingsHelpers", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Modules/AndroidJNI/Public/AndroidJNIBindingsHelpers.h")]
// [UsedByNativeCode]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJNIHelper
class CORDL_TYPE AndroidJNIHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method Box, addr 0x6ead924, size 0x134, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(::UnityEngine::jvalue val, ::StringW boxedClass, ::StringW signature);

  /// @brief Method Box, addr 0x6eade90, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(bool value);

  /// @brief Method Box, addr 0x6eade28, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(char16_t value);

  /// @brief Method Box, addr 0x6eaddb8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(double_t value);

  /// @brief Method Box, addr 0x6eadd48, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(float_t value);

  /// @brief Method Box, addr 0x6eadc10, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(int16_t value);

  /// @brief Method Box, addr 0x6eadc78, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(int32_t value);

  /// @brief Method Box, addr 0x6eadce0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(int64_t value);

  /// @brief Method Box, addr 0x6eadba8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr Box(int8_t value);

  /// @brief Method ConvertFromJNIArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ArrayType> static inline ArrayType ConvertFromJNIArray(::System::IntPtr array);

  /// @brief Method ConvertToJNIArray, addr 0x6eab098, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToJNIArray(::System::Array* array);

  /// @brief Method CreateJNIArgArray, addr 0x6eabda4, size 0xc8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::jvalue> CreateJNIArgArray(::ArrayW<::System::Object*> args);

  /// @brief Method CreateJNIArgArray, addr 0x6eac37c, size 0x130, virtual false, abstract: false, final false
  static inline void CreateJNIArgArray(::ArrayW<::System::Object*> args, ::System::Span_1<::UnityEngine::jvalue> jniArgs);

  /// @brief Method CreateJavaProxy, addr 0x6eaaeb0, size 0x134, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateJavaProxy(::UnityEngine::AndroidJavaProxy* proxy);

  /// @brief Method CreateJavaRunnable, addr 0x6eaadfc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* jrunnable);

  /// @brief Method DeleteJNIArgArray, addr 0x6eac4ac, size 0x98, virtual false, abstract: false, final false
  static inline void DeleteJNIArgArray(::ArrayW<::System::Object*> args, ::ArrayW<::UnityEngine::jvalue> jniArgs);

  /// @brief Method DeleteJNIArgArray, addr 0x6eac6b4, size 0x70, virtual false, abstract: false, final false
  static inline void DeleteJNIArgArray(::ArrayW<::System::Object*> args, ::System::Span_1<::UnityEngine::jvalue> jniArgs);

  /// @brief Method GetConstructorID, addr 0x6eaa498, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetConstructorID(::System::IntPtr javaClass);

  /// @brief Method GetConstructorID, addr 0x6eaa4e4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetConstructorID(::System::IntPtr javaClass, /* [DefaultValue("")] */ ::StringW signature);

  /// @brief Method GetConstructorID, addr 0x6eac724, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetConstructorID(::System::IntPtr jclass, ::ArrayW<::System::Object*> args);

  /// @brief Method GetFieldID, addr 0x6eaaa58, size 0x60, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID(::System::IntPtr javaClass, ::StringW fieldName);

  /// @brief Method GetFieldID, addr 0x6eaab38, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID(::System::IntPtr javaClass, ::StringW fieldName, /* [DefaultValue("")] */ ::StringW signature);

  /// @brief Method GetFieldID, addr 0x6eaaab8, size 0x80, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID(::System::IntPtr javaClass, ::StringW fieldName, /* [DefaultValue("")] */ ::StringW signature, /* [DefaultValue("false")] */ bool isStatic);

  /// @brief Method GetFieldID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename FieldType> static inline ::System::IntPtr GetFieldID(::System::IntPtr jclass, ::StringW fieldName, bool isStatic);

  /// @brief Method GetMethodID, addr 0x6eaa748, size 0x60, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr javaClass, ::StringW methodName);

  /// @brief Method GetMethodID, addr 0x6eaa828, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr javaClass, ::StringW methodName, /* [DefaultValue("")] */ ::StringW signature);

  /// @brief Method GetMethodID, addr 0x6eaa7a8, size 0x80, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr javaClass, ::StringW methodName, /* [DefaultValue("")] */ ::StringW signature, /* [DefaultValue("false")] */ bool isStatic);

  /// @brief Method GetMethodID, addr 0x6eac7fc, size 0x80, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::System::Object*> args, bool isStatic);

  /// @brief Method GetMethodID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType> static inline ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::System::Object*> args, bool isStatic);

  /// @brief Method GetSignature, addr 0x6ead768, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetSignature(::ArrayW<::System::Object*> args);

  /// @brief Method GetSignature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ReturnType> static inline ::StringW GetSignature(::ArrayW<::System::Object*> args);

  /// @brief Method GetSignature, addr 0x6eac904, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetSignature(::System::Object* obj);

  /// @brief Method GetUnboxMethod, addr 0x6eadef8, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetUnboxMethod(::System::IntPtr obj, ::StringW methodName, ::StringW signature);

  /// @brief Method Unbox, addr 0x6eae7f4, size 0x94, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::by_ref<bool> value);

  /// @brief Method Unbox, addr 0x6eae6f4, size 0x90, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::by_ref<char16_t> value);

  /// @brief Method Unbox, addr 0x6eae5e8, size 0x90, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::by_ref<double_t> value);

  /// @brief Method Unbox, addr 0x6eae4dc, size 0x90, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::by_ref<float_t> value);

  /// @brief Method Unbox, addr 0x6eae1dc, size 0x90, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::by_ref<int16_t> value);

  /// @brief Method Unbox, addr 0x6eae2dc, size 0x90, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::by_ref<int32_t> value);

  /// @brief Method Unbox, addr 0x6eae3dc, size 0x90, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::by_ref<int64_t> value);

  /// @brief Method Unbox, addr 0x6eae0dc, size 0x90, virtual false, abstract: false, final false
  static inline void Unbox(::System::IntPtr obj, ::by_ref<int8_t> value);

  /// @brief Method get_debug, addr 0x6eaa434, size 0x28, virtual false, abstract: false, final false
  static inline bool get_debug();

  /// @brief Method set_debug, addr 0x6eaa45c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_debug(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJNIHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNIHelper", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJNIHelper(AndroidJNIHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNIHelper", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJNIHelper(AndroidJNIHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20686 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AndroidJNIHelper) == 0x10, "Size mismatch!");

} // namespace UnityEngine
