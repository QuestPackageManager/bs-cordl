#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJavaProxy)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine {
class GlobalJavaObjectRef;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaProxy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaProxy);
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJavaProxy
class CORDL_TYPE AndroidJavaProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field javaInterface, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_javaInterface, put = __cordl_internal_set_javaInterface)) ::UnityEngine::AndroidJavaClass* javaInterface;

  /// @brief Field proxyObject, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_proxyObject, put = __cordl_internal_set_proxyObject)) ::System::IntPtr proxyObject;

  /// @brief Field s_HashCodeMethodID, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_HashCodeMethodID, put = setStaticF_s_HashCodeMethodID)) ::System::IntPtr s_HashCodeMethodID;

  /// @brief Field s_JavaLangSystemClass, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_JavaLangSystemClass, put = setStaticF_s_JavaLangSystemClass)) ::UnityEngine::GlobalJavaObjectRef* s_JavaLangSystemClass;

  /// @brief Method Finalize, addr 0x67f5704, size 0x78, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetProxyObject, addr 0x67f7bb8, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::AndroidJavaObject* GetProxyObject();

  /// @brief Method GetRawProxy, addr 0x67f7a94, size 0xbc, virtual false, abstract: false, final false
  inline ::System::IntPtr GetRawProxy();

  /// @brief Method Invoke, addr 0x67f537c, size 0x37c, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::StringW methodName, ::System::IntPtr javaArgs);

  /// @brief Method Invoke, addr 0x67f577c, size 0x94c, virtual true, abstract: false, final false
  inline ::UnityEngine::AndroidJavaObject* Invoke(::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Invoke, addr 0x67f6bf8, size 0x1a8, virtual true, abstract: false, final false
  inline ::UnityEngine::AndroidJavaObject* Invoke(::StringW methodName, ::ArrayW<::UnityEngine::AndroidJavaObject*, ::Array<::UnityEngine::AndroidJavaObject*>*> javaArgs);

  static inline ::UnityEngine::AndroidJavaProxy* New_ctor(::StringW javaInterface);

  static inline ::UnityEngine::AndroidJavaProxy* New_ctor(::UnityEngine::AndroidJavaClass* javaInterface);

  constexpr ::UnityEngine::AndroidJavaClass* const& __cordl_internal_get_javaInterface() const;

  constexpr ::UnityEngine::AndroidJavaClass*& __cordl_internal_get_javaInterface();

  constexpr ::System::IntPtr const& __cordl_internal_get_proxyObject() const;

  constexpr ::System::IntPtr& __cordl_internal_get_proxyObject();

  constexpr void __cordl_internal_set_javaInterface(::UnityEngine::AndroidJavaClass* value);

  constexpr void __cordl_internal_set_proxyObject(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x67f5244, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW javaInterface);

  /// @brief Method .ctor, addr 0x67f56fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AndroidJavaClass* javaInterface);

  /// @brief Method equals, addr 0x67f7938, size 0x58, virtual true, abstract: false, final false
  inline bool equals(::UnityEngine::AndroidJavaObject* obj);

  static inline ::System::IntPtr getStaticF_s_HashCodeMethodID();

  static inline ::UnityEngine::GlobalJavaObjectRef* getStaticF_s_JavaLangSystemClass();

  /// @brief Method hashCode, addr 0x67f7990, size 0x104, virtual true, abstract: false, final false
  inline int32_t hashCode();

  static inline void setStaticF_s_HashCodeMethodID(::System::IntPtr value);

  static inline void setStaticF_s_JavaLangSystemClass(::UnityEngine::GlobalJavaObjectRef* value);

  /// @brief Method toString, addr 0x67f7b50, size 0x68, virtual true, abstract: false, final false
  inline ::StringW toString();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJavaProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJavaProxy(AndroidJavaProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJavaProxy(AndroidJavaProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19901 };

  /// @brief Field javaInterface, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AndroidJavaClass* ___javaInterface;

  /// @brief Field proxyObject, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___proxyObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AndroidJavaProxy, ___javaInterface) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJavaProxy, ___proxyObject) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaProxy, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaProxy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaProxy*, "UnityEngine", "AndroidJavaProxy");
