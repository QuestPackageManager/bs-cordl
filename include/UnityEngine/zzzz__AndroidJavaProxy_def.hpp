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

  /// @brief Method Finalize, addr 0x4845c48, size 0x98, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetProxyObject, addr 0x484826c, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::AndroidJavaObject* GetProxyObject();

  /// @brief Method GetRawProxy, addr 0x4846f98, size 0xf8, virtual false, abstract: false, final false
  inline ::System::IntPtr GetRawProxy();

  /// @brief Method Invoke, addr 0x4845810, size 0x3e0, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::StringW methodName, ::System::IntPtr javaArgs);

  /// @brief Method Invoke, addr 0x4845ce0, size 0x904, virtual true, abstract: false, final false
  inline ::UnityEngine::AndroidJavaObject* Invoke(::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Invoke, addr 0x4847198, size 0x174, virtual true, abstract: false, final false
  inline ::UnityEngine::AndroidJavaObject* Invoke(::StringW methodName, ::ArrayW<::UnityEngine::AndroidJavaObject*, ::Array<::UnityEngine::AndroidJavaObject*>*> javaArgs);

  static inline ::UnityEngine::AndroidJavaProxy* New_ctor(::StringW javaInterface);

  static inline ::UnityEngine::AndroidJavaProxy* New_ctor(::UnityEngine::AndroidJavaClass* javaInterface);

  constexpr ::UnityEngine::AndroidJavaClass* const& __cordl_internal_get_javaInterface() const;

  constexpr ::UnityEngine::AndroidJavaClass*& __cordl_internal_get_javaInterface();

  constexpr ::System::IntPtr const& __cordl_internal_get_proxyObject() const;

  constexpr ::System::IntPtr& __cordl_internal_get_proxyObject();

  constexpr void __cordl_internal_set_javaInterface(::UnityEngine::AndroidJavaClass* value);

  constexpr void __cordl_internal_set_proxyObject(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x48456ac, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW javaInterface);

  /// @brief Method .ctor, addr 0x4845c1c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AndroidJavaClass* javaInterface);

  /// @brief Method equals, addr 0x48480f4, size 0x58, virtual true, abstract: false, final false
  inline bool equals(::UnityEngine::AndroidJavaObject* obj);

  static inline ::System::IntPtr getStaticF_s_HashCodeMethodID();

  static inline ::UnityEngine::GlobalJavaObjectRef* getStaticF_s_JavaLangSystemClass();

  /// @brief Method hashCode, addr 0x484814c, size 0xbc, virtual true, abstract: false, final false
  inline int32_t hashCode();

  static inline void setStaticF_s_HashCodeMethodID(::System::IntPtr value);

  static inline void setStaticF_s_JavaLangSystemClass(::UnityEngine::GlobalJavaObjectRef* value);

  /// @brief Method toString, addr 0x4848208, size 0x64, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16770 };

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
